
/* Copyright 2017 The TensorFlow Authors. All Rights Reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
#ifndef TENSORFLOW_CORE_KERNELS_RESHAPE_UTIL_H_
#define TENSORFLOW_CORE_KERNELS_RESHAPE_UTIL_H_

#include "tensorflow/core/framework/tensor.h"
#include "tensorflow/core/lib/core/status.h"

namespace tensorflow {

// Reshapes the input indices and input shape to the target shape.
void Reshape(OpKernelContext *context, const Tensor &input_indices_in,
             const Tensor &input_shape_in, const Tensor &target_shape_in,
             int output_indices_idx, int output_shape_idx);

void Reshape(OpKernelContext *context, const Tensor &input_indices_in,
             const Tensor &input_shape_in, const Tensor &target_shape_in,
             Tensor* output_indices, Tensor* output_shape);

}  // namespace tensorflow

#endif  // TENSORFLOW_CORE_KERNELS_RESHAPE_UTIL_H_
