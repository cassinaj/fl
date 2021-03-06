
## some quick tests ##
#catkin_add_gtest(some_test
#                 utils/some_test.cpp
#                 gtest_main.cpp)
#target_link_libraries(some_test
#                      ${catkin_LIBRARIES})

## trait tests ##
catkin_add_gtest(traits_test
                 utils/traits_test.cpp
                 gtest_main.cpp)
target_link_libraries(traits_test
                      ${catkin_LIBRARIES})


## meta tests##
catkin_add_gtest(meta_test utils/meta_test.cpp gtest_main.cpp)
target_link_libraries(meta_test ${catkin_LIBRARIES})

catkin_add_gtest(options_test utils/options_test.cpp gtest_main.cpp)
target_link_libraries(options_test ${catkin_LIBRARIES})

catkin_add_gtest(join_test utils/join_test.cpp gtest_main.cpp)
target_link_libraries(join_test ${catkin_LIBRARIES})

catkin_add_gtest(not_adaptive_test utils/not_adaptive_test.cpp gtest_main.cpp)
target_link_libraries(not_adaptive_test ${catkin_LIBRARIES})


 # filter interface tests ##
 catkin_add_gtest(filter_interface_test
                  filter_interface/filter_interface_test.cpp
                  filter_interface/filter_interface_stubs.hpp
                  gtest_main.cpp)
 target_link_libraries(filter_interface_test
                       ${catkin_LIBRARIES})

 ## point_set_test tests ##
 catkin_add_gtest(point_set_test
                  gaussian_filter/point_set_test.cpp
                  gtest_main.cpp)
 target_link_libraries(point_set_test
                       ${catkin_LIBRARIES})

 ## unscented_transform tests ##
 catkin_add_gtest(unscented_transform_test
                  gaussian_filter/unscented_transform_test.cpp
                  gtest_main.cpp)
 target_link_libraries(unscented_transform_test
                       ${catkin_LIBRARIES})

 ## monte_carlo trandform tests ##
# catkin_add_gtest(monte_carlo_transform_test
#                  gaussian_filter/monte_carlo_transform_test.cpp
#                  gtest_main.cpp)
# target_link_libraries(monte_carlo_transform_test
#                       ${catkin_LIBRARIES})

 ## various filter tests ##
 catkin_add_gtest(distribution_test
                  distribution/gaussian_test.cpp
                  gtest_main.cpp)
 target_link_libraries(distribution_test
                       ${catkin_LIBRARIES})

 catkin_add_gtest(joint_distribution_id_test
                  distribution/joint_distribution_id_test.cpp
                  gtest_main.cpp)
 target_link_libraries(joint_distribution_id_test ${catkin_LIBRARIES})


 catkin_add_gtest(joint_distribution_iid_test
                  distribution/joint_distribution_iid_test.cpp
                  gtest_main.cpp)
 target_link_libraries(joint_distribution_iid_test ${catkin_LIBRARIES})

 ## exceptions tests ##
 catkin_add_gtest(exception_test
                  exception/exception_test.cpp
                  gtest_main.cpp)
 target_link_libraries(exception_test ${catkin_LIBRARIES})

 ## linear models tests ##
 catkin_add_gtest(linear_models_test
                  model/linear_process_model_test.cpp
                  model/linear_observation_model_test.cpp
                  gtest_main.cpp)
 target_link_libraries(linear_models_test ${catkin_LIBRARIES})

 catkin_add_gtest(joint_observation_model_iid_test
                  model/joint_observation_model_iid_test.cpp
                  gtest_main.cpp)
 target_link_libraries(joint_observation_model_iid_test ${catkin_LIBRARIES})

 catkin_add_gtest(joint_process_model_id_test
                  model/joint_process_model_id_test.cpp
                  gtest_main.cpp)
 target_link_libraries(joint_process_model_id_test ${catkin_LIBRARIES})


 catkin_add_gtest(joint_process_model_iid_test
                  model/joint_process_model_iid_test.cpp
                  gtest_main.cpp)
 target_link_libraries(joint_process_model_iid_test ${catkin_LIBRARIES})

## Gaussian Filters tests ##
# Kalman filter #
catkin_add_gtest(gaussian_filter_kf_test
                 gaussian_filter/gaussian_filter_kf_test.cpp
                 gtest_main.cpp)
target_link_libraries(gaussian_filter_kf_test ${catkin_LIBRARIES})

# Factorized SPKF #
#catkin_add_gtest(gaussian_filter_factorized_test
#                 gaussian_filter/gaussian_filter_factorized_test.cpp
#                 gtest_main.cpp)
#target_link_libraries(gaussian_filter_factorized_test ${catkin_LIBRARIES})




# sum_of_delta distribution test #
 catkin_add_gtest(sum_of_delta_test
                  distribution/sum_of_delta_test.cpp
                  gtest_main.cpp)
 target_link_libraries(sum_of_delta_test
                       ${catkin_LIBRARIES})

# sum_of_delta distribution test #
 catkin_add_gtest(discrete_distribution_test
                  distribution/discrete_distribution_test.cpp
                  gtest_main.cpp)
 target_link_libraries(discrete_distribution_test
                       ${catkin_LIBRARIES})

# particle filter tests #
 catkin_add_gtest(particle_filter_test
                  particle_filter/particle_filter_test.cpp
                  gtest_main.cpp)
 target_link_libraries(particle_filter_test
                       ${catkin_LIBRARIES})



#catkin_add_gtest(adaptive_test
#                 model/adaptive_test.cpp
#                 gtest_main.cpp)
#target_link_libraries(adaptive_test ${catkin_LIBRARIES})


# ## Gaussian filter tests ##
# catkin_add_gtest(gaussian_filter_test
#                  gaussian_filter/gaussian_filter_test.cpp
#                  gaussian_filter/gaussian_filter_stubs.hpp
#                  gtest_main.cpp)
# target_link_libraries(gaussian_filter_test
#                       ${catkin_LIBRARIES})


## Factorized UKF vs. Kalman filter tests ##
# catkin_add_gtest(factorized_ukf_kf_test
#                  factorized_ukf/factorized_ukf_kf_test.cpp
#                  gtest_main.cpp)
# target_link_libraries(factorized_ukf_kf_test
#                       ${catkin_LIBRARIES})
##
## ## Factorized UKF tests ##
# catkin_add_gtest(factorized_ukf_test
##                  factorized_ukf/linear_models_test.cpp
#                  factorized_ukf/partitioned_ut_test.cpp
#                  factorized_ukf/smw_inversion_test.cpp
#                  factorized_ukf/square_root_test.cpp
##                  factorized_ukf/llt_diagonal_test.cpp
#                  factorized_ukf/factorized_ukf_unscented_transform_test.cpp
##                  factorized_ukf/predict_test.cpp
#                  factorized_ukf/factorized_ukf_dummies.hpp
#                  factorized_ukf/factorized_ukf_stubs.hpp
#                  gtest_main.cpp)
# target_link_libraries(factorized_ukf_test
#                       ${PROJECT_NAME_TRACKING_INTERFACE}
#                       ${PROJECT_NAME_TRACKING}
#                       ${catkin_LIBRARIES})
