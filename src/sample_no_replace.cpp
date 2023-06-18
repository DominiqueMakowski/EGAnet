// This function was created with the assistance of GPT-4
// Much of the template for the code was generated by GPT-4

// Headers to include
#include <Rcpp.h>
#include <random>

// Sample without replacement
std::vector<int> shuffle_array(std::vector<int> arr, unsigned int seed) {

    // Initialize a mersenne twister PRNG
    std::mt19937 g(seed);

    // Shuffle the array
    std::shuffle(arr.begin(), arr.end(), g);

    return arr;
}

//' @noRd
// [[Rcpp::export]]
Rcpp::IntegerVector r_sample_without_replacement(Rcpp::IntegerVector arr, unsigned int seed) {

    // Obtain shuffled array
    std::vector<int> arrVec = Rcpp::as<std::vector<int>>(arr);
    std::vector<int> shuffled = shuffle_array(arrVec, seed);

    // Convert back to Rcpp vector
    Rcpp::IntegerVector r_without_replacement = Rcpp::wrap(shuffled);

    return r_without_replacement;
}
