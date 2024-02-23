import fuzzywuzzy
from fuzzywuzzy import process

# Sample tables for canonical names
country_table = ["India", "United States", "Australia"]
city_table = ["Mumbai", "New York", "Sydney"]
state_table = ["Maharashtra", "New York", "New South Wales"]

def identify_geospatial_entities(query):
    # Tokenize the input query
    tokens = query.split()

    # Sample data for fuzzy matching
    sample_data = [
        (country_table, "Country"),
        (city_table, "City"),
        (state_table, "State"),
    ]

    # Placeholder for identified entities
    identified_entities = []

    for token in tokens:
        # Fuzzy match each token against the tables
        matches = []
        for table, entity_type in sample_data:
            match, score = process.extractOne(token, table)
            matches.append((match, score, entity_type))

        # Choose the best match based on the highest score
        best_match = max(matches, key=lambda x: x[1])

        # If the score is above a certain threshold, consider it a valid match
        if best_match[1] >= 80:
            identified_entities.append((best_match[0], best_match[2]))

    return identified_entities

# Example usage
query = "Which of the following has the most population, Maharashtra, Ahmedabad or entire New-Zealand?"
result = identify_geospatial_entities(query)

# Output the result
for entity, entity_type in result:
    print(f"Token: {entity}, Canonical name: {entity}, Table: {entity_type}")
