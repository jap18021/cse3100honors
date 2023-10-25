#pragma once
#include <cstdarg>
namespace Eloquent {
    namespace ML {
        namespace Port {
            class RandomForest {
                public:
                    /**
                    * Predict class for features vector
                    */
                    int predict(float *x) {
                        uint8_t votes[2] = { 0 };
                        // tree #1
                        if (x[0] <= 4.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[0] <= 5.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #2
                        if (x[0] <= 4.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1] <= 16.5) {
                                if (x[1] <= 15.5) {
                                    if (x[0] <= 5.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #3
                        if (x[0] <= 4.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[3] <= 310.0) {
                                votes[1] += 1;
                            }

                            else {
                                if (x[3] <= 491.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[3] <= 578.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }
                        }

                        // tree #4
                        if (x[1] <= 15.5) {
                            if (x[0] <= 4.5) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[0] <= 5.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[2] <= 80526.0) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #5
                        if (x[0] <= 4.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[0] <= 5.5) {
                                votes[1] += 1;
                            }

                            else {
                                if (x[2] <= 46681.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[0] <= 12.0) {
                                        if (x[0] <= 7.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[1] <= 15.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }
                        }

                        // tree #6
                        if (x[2] <= 35300.0) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1] <= 16.5) {
                                if (x[2] <= 35558.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[1] <= 15.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #7
                        if (x[3] <= 235.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[0] <= 4.5) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[2] <= 55265.0) {
                                    if (x[2] <= 46681.5) {
                                        if (x[3] <= 278.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    if (x[3] <= 539.5) {
                                        if (x[2] <= 67639.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }
                        }

                        // tree #8
                        if (x[0] <= 8.5) {
                            if (x[0] <= 4.5) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[0] <= 5.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[0] <= 9.5) {
                                votes[1] += 1;
                            }

                            else {
                                if (x[0] <= 10.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[3] <= 539.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }
                        }

                        // tree #9
                        if (x[0] <= 8.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1] <= 13.5) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[2] <= 75287.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #10
                        if (x[1] <= 15.5) {
                            if (x[0] <= 4.5) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[2] <= 36371.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[0] <= 7.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #11
                        if (x[0] <= 7.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[3] <= 310.0) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #12
                        if (x[2] <= 35152.0) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[2] <= 35558.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #13
                        if (x[3] <= 419.0) {
                            if (x[1] <= 15.5) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[1] <= 16.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[3] <= 539.5) {
                                if (x[0] <= 10.5) {
                                    if (x[3] <= 447.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #14
                        if (x[1] <= 15.5) {
                            votes[0] += 1;
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #15
                        if (x[0] <= 4.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1] <= 12.5) {
                                if (x[0] <= 5.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[2] <= 62400.5) {
                                    if (x[3] <= 447.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #16
                        if (x[1] <= 15.5) {
                            if (x[3] <= 235.5) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[3] <= 241.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[3] <= 539.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #17
                        if (x[1] <= 15.5) {
                            if (x[0] <= 4.5) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[2] <= 36371.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[2] <= 62724.5) {
                                votes[1] += 1;
                            }

                            else {
                                if (x[1] <= 18.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[0] <= 12.0) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }
                        }

                        // tree #18
                        if (x[1] <= 15.5) {
                            if (x[0] <= 4.5) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[3] <= 278.5) {
                                    if (x[0] <= 5.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[2] <= 62724.5) {
                                votes[1] += 1;
                            }

                            else {
                                if (x[3] <= 578.5) {
                                    if (x[2] <= 67963.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #19
                        if (x[3] <= 491.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[0] <= 12.0) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #20
                        if (x[1] <= 15.0) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[2] <= 62724.5) {
                                votes[1] += 1;
                            }

                            else {
                                if (x[3] <= 539.5) {
                                    if (x[3] <= 463.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #21
                        if (x[2] <= 60208.0) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[0] <= 12.0) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #22
                        if (x[1] <= 15.5) {
                            if (x[2] <= 35300.0) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[2] <= 35558.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #23
                        if (x[0] <= 4.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[0] <= 5.5) {
                                votes[1] += 1;
                            }

                            else {
                                if (x[3] <= 491.5) {
                                    if (x[3] <= 359.0) {
                                        if (x[2] <= 44375.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }
                        }

                        // tree #24
                        if (x[1] <= 15.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1] <= 16.5) {
                                votes[1] += 1;
                            }

                            else {
                                if (x[0] <= 13.0) {
                                    if (x[0] <= 8.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #25
                        if (x[0] <= 8.5) {
                            if (x[0] <= 4.5) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[3] <= 235.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[3] <= 327.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[0] <= 13.0) {
                                if (x[1] <= 15.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #26
                        if (x[1] <= 15.5) {
                            if (x[1] <= 10.5) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[0] <= 4.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[2] <= 36371.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[3] <= 578.5) {
                                if (x[2] <= 67963.0) {
                                    if (x[2] <= 62724.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #27
                        if (x[1] <= 15.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[3] <= 495.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #28
                        if (x[2] <= 35152.0) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[2] <= 36371.5) {
                                votes[1] += 1;
                            }

                            else {
                                if (x[3] <= 491.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[0] <= 12.0) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }
                        }

                        // tree #29
                        if (x[2] <= 60208.0) {
                            if (x[3] <= 232.0) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[3] <= 244.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #30
                        if (x[0] <= 4.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[0] <= 5.5) {
                                votes[1] += 1;
                            }

                            else {
                                if (x[2] <= 76098.0) {
                                    if (x[1] <= 15.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #31
                        if (x[0] <= 4.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[0] <= 9.5) {
                                if (x[3] <= 235.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #32
                        if (x[1] <= 15.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[3] <= 534.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #33
                        if (x[2] <= 48861.0) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[0] <= 8.5) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[0] <= 13.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #34
                        if (x[1] <= 18.0) {
                            if (x[0] <= 4.5) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[2] <= 36371.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[0] <= 12.0) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #35
                        if (x[2] <= 48861.0) {
                            if (x[1] <= 10.5) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[0] <= 4.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[2] <= 36371.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[1] <= 15.5) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[3] <= 578.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #36
                        if (x[1] <= 15.5) {
                            if (x[3] <= 235.5) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[2] <= 36989.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[1] <= 16.5) {
                                votes[1] += 1;
                            }

                            else {
                                if (x[2] <= 67963.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }
                        }

                        // tree #37
                        if (x[0] <= 4.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[2] <= 36371.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #38
                        if (x[1] <= 15.5) {
                            if (x[0] <= 4.5) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[0] <= 5.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[2] <= 62724.5) {
                                votes[1] += 1;
                            }

                            else {
                                if (x[0] <= 12.0) {
                                    if (x[3] <= 463.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #39
                        if (x[2] <= 35300.0) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[2] <= 35558.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #40
                        if (x[3] <= 235.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1] <= 15.5) {
                                if (x[3] <= 244.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #41
                        if (x[0] <= 4.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[3] <= 310.0) {
                                votes[1] += 1;
                            }

                            else {
                                if (x[3] <= 370.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[0] <= 11.0) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }
                        }

                        // tree #42
                        if (x[1] <= 15.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[0] <= 12.0) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #43
                        if (x[3] <= 437.0) {
                            if (x[3] <= 235.5) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[3] <= 241.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[3] <= 539.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #44
                        if (x[0] <= 8.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[2] <= 60208.0) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[3] <= 539.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #45
                        if (x[0] <= 8.5) {
                            if (x[3] <= 235.5) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[3] <= 256.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[0] <= 9.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #46
                        if (x[1] <= 15.5) {
                            if (x[3] <= 235.5) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[2] <= 38677.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[3] <= 539.5) {
                                if (x[0] <= 7.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #47
                        if (x[2] <= 48861.0) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[3] <= 319.5) {
                                votes[1] += 1;
                            }

                            else {
                                if (x[1] <= 18.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[0] <= 12.0) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }
                        }

                        // tree #48
                        if (x[1] <= 15.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[0] <= 13.0) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #49
                        if (x[0] <= 8.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[0] <= 11.0) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #50
                        if (x[1] <= 15.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[3] <= 539.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #51
                        if (x[0] <= 10.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[3] <= 539.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #52
                        if (x[3] <= 235.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[0] <= 4.5) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[1] <= 15.5) {
                                    if (x[2] <= 38677.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }
                        }

                        // tree #53
                        if (x[3] <= 419.0) {
                            if (x[0] <= 7.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #54
                        if (x[1] <= 15.5) {
                            votes[0] += 1;
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #55
                        if (x[3] <= 297.0) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[2] <= 52617.0) {
                                votes[1] += 1;
                            }

                            else {
                                if (x[1] <= 15.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[2] <= 62724.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }
                        }

                        // tree #56
                        if (x[0] <= 7.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[3] <= 310.0) {
                                votes[1] += 1;
                            }

                            else {
                                if (x[2] <= 76098.0) {
                                    if (x[1] <= 16.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #57
                        if (x[2] <= 48854.0) {
                            if (x[3] <= 235.5) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[3] <= 241.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[0] <= 8.5) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[0] <= 12.0) {
                                    if (x[2] <= 60208.0) {
                                        if (x[1] <= 15.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #58
                        if (x[0] <= 7.5) {
                            votes[0] += 1;
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #59
                        if (x[1] <= 15.5) {
                            if (x[3] <= 235.5) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[2] <= 36989.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[2] <= 76098.0) {
                                if (x[1] <= 16.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[1] <= 18.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #60
                        if (x[3] <= 235.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[0] <= 4.5) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[3] <= 539.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #61
                        if (x[3] <= 287.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[3] <= 333.0) {
                                votes[1] += 1;
                            }

                            else {
                                if (x[3] <= 491.5) {
                                    if (x[0] <= 8.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[3] <= 447.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 12.0) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }
                        }

                        // tree #62
                        if (x[1] <= 18.0) {
                            if (x[3] <= 235.5) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[3] <= 244.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[3] <= 578.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #63
                        if (x[1] <= 15.5) {
                            if (x[3] <= 232.0) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[2] <= 40850.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[3] <= 539.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #64
                        if (x[2] <= 48861.0) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[3] <= 319.5) {
                                votes[1] += 1;
                            }

                            else {
                                if (x[0] <= 8.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[0] <= 9.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }
                        }

                        // tree #65
                        if (x[2] <= 48861.0) {
                            if (x[0] <= 4.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            if (x[0] <= 12.0) {
                                if (x[0] <= 8.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #66
                        if (x[0] <= 8.5) {
                            if (x[2] <= 35152.0) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[2] <= 35558.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[3] <= 578.5) {
                                if (x[1] <= 15.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #67
                        if (x[1] <= 15.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1] <= 16.5) {
                                votes[1] += 1;
                            }

                            else {
                                if (x[0] <= 8.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[2] <= 80526.0) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }
                        }

                        // tree #68
                        if (x[2] <= 67639.0) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[2] <= 76098.0) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #69
                        if (x[3] <= 235.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[0] <= 8.5) {
                                if (x[3] <= 241.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[2] <= 76098.0) {
                                    if (x[1] <= 15.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #70
                        if (x[1] <= 15.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[2] <= 62724.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #71
                        if (x[1] <= 15.0) {
                            if (x[0] <= 4.5) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[0] <= 5.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[1] <= 16.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #72
                        if (x[3] <= 419.0) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1] <= 15.0) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[1] <= 20.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #73
                        if (x[3] <= 419.0) {
                            if (x[3] <= 235.5) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[2] <= 36989.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[2] <= 60208.0) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #74
                        if (x[0] <= 7.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[3] <= 447.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #75
                        if (x[0] <= 8.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[3] <= 495.5) {
                                if (x[2] <= 46681.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #76
                        if (x[1] <= 15.5) {
                            if (x[3] <= 235.5) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[2] <= 36989.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[2] <= 76098.0) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #77
                        if (x[0] <= 8.5) {
                            if (x[0] <= 4.5) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[0] <= 5.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[1] <= 15.0) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[0] <= 13.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #78
                        if (x[1] <= 15.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[0] <= 7.5) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[2] <= 76098.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #79
                        if (x[3] <= 419.0) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[2] <= 62400.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #80
                        if (x[0] <= 8.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[0] <= 12.0) {
                                if (x[1] <= 13.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #81
                        if (x[0] <= 4.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[3] <= 359.0) {
                                if (x[3] <= 235.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[3] <= 539.5) {
                                    if (x[0] <= 9.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #82
                        if (x[1] <= 17.0) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[3] <= 539.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #83
                        if (x[0] <= 4.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[2] <= 76098.0) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #84
                        if (x[2] <= 48861.0) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[3] <= 333.0) {
                                votes[1] += 1;
                            }

                            else {
                                if (x[1] <= 15.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[0] <= 7.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }
                        }

                        // tree #85
                        if (x[0] <= 7.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[2] <= 76098.0) {
                                if (x[1] <= 15.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #86
                        if (x[0] <= 4.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[3] <= 310.0) {
                                votes[1] += 1;
                            }

                            else {
                                if (x[2] <= 76098.0) {
                                    if (x[1] <= 18.0) {
                                        if (x[3] <= 419.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[0] <= 8.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #87
                        if (x[2] <= 48854.0) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[2] <= 54249.0) {
                                votes[1] += 1;
                            }

                            else {
                                if (x[3] <= 491.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[1] <= 20.0) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }
                        }

                        // tree #88
                        if (x[1] <= 15.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[3] <= 359.0) {
                                votes[1] += 1;
                            }

                            else {
                                if (x[0] <= 12.0) {
                                    if (x[0] <= 8.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #89
                        if (x[1] <= 15.5) {
                            if (x[3] <= 235.5) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[2] <= 40039.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[0] <= 12.0) {
                                if (x[0] <= 7.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #90
                        if (x[0] <= 8.5) {
                            if (x[0] <= 4.5) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[0] <= 5.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[0] <= 12.0) {
                                if (x[1] <= 15.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #91
                        if (x[3] <= 419.0) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1] <= 15.5) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[0] <= 12.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #92
                        if (x[0] <= 8.5) {
                            if (x[0] <= 4.5) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[0] <= 5.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[3] <= 447.5) {
                                votes[1] += 1;
                            }

                            else {
                                if (x[0] <= 10.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[2] <= 80526.0) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }
                        }

                        // tree #93
                        if (x[1] <= 18.0) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[0] <= 13.0) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #94
                        if (x[3] <= 235.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[0] <= 4.5) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[2] <= 38677.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[2] <= 46681.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[2] <= 70859.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #95
                        if (x[0] <= 8.5) {
                            if (x[3] <= 235.5) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[2] <= 36989.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[0] <= 12.0) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #96
                        if (x[1] <= 15.5) {
                            if (x[0] <= 4.5) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[2] <= 38677.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[1] <= 17.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #97
                        if (x[0] <= 4.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[3] <= 235.5) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[2] <= 55265.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[2] <= 67963.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[2] <= 76098.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #98
                        if (x[1] <= 15.5) {
                            if (x[3] <= 234.5) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[3] <= 241.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[0] <= 12.0) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #99
                        if (x[0] <= 4.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[2] <= 36371.5) {
                                votes[1] += 1;
                            }

                            else {
                                if (x[0] <= 8.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[2] <= 76098.0) {
                                        if (x[2] <= 60208.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }
                        }

                        // tree #100
                        if (x[0] <= 8.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[3] <= 447.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // return argmax of votes
                        uint8_t classIdx = 0;
                        float maxVotes = votes[0];

                        for (uint8_t i = 1; i < 2; i++) {
                            if (votes[i] > maxVotes) {
                                classIdx = i;
                                maxVotes = votes[i];
                            }
                        }

                        return classIdx;
                    }

                protected:
                };
            }
        }
    }