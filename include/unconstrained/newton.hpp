/*################################################################################
  ##
  ##   Copyright (C) 2016-2020 Keith O'Hara
  ##
  ##   This file is part of the OptimLib C++ library.
  ##
  ##   Licensed under the Apache License, Version 2.0 (the "License");
  ##   you may not use this file except in compliance with the License.
  ##   You may obtain a copy of the License at
  ##
  ##       http://www.apache.org/licenses/LICENSE-2.0
  ##
  ##   Unless required by applicable law or agreed to in writing, software
  ##   distributed under the License is distributed on an "AS IS" BASIS,
  ##   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  ##   See the License for the specific language governing permissions and
  ##   limitations under the License.
  ##
  ################################################################################*/

/*
 * Newton's method for non-linear optimization
 */

#ifndef _optim_newton_HPP
#define _optim_newton_HPP

bool newton_int(Vec_t& init_out_vals, 
                std::function<double (const Vec_t& vals_inp, Vec_t* grad_out, Mat_t* hess_out, void* opt_data)> opt_objfn, 
                void* opt_data, 
                algo_settings_t* settings_inp);

bool newton(Vec_t& init_out_vals, 
            std::function<double (const Vec_t& vals_inp, Vec_t* grad_out, Mat_t* hess_out, void* opt_data)> opt_objfn, 
            void* opt_data);

bool newton(Vec_t& init_out_vals, 
            std::function<double (const Vec_t& vals_inp, Vec_t* grad_out, Mat_t* hess_out, void* opt_data)> opt_objfn, 
            void* opt_data, 
            algo_settings_t& settings);

#endif
