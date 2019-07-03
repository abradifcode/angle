// GENERATED FILE - DO NOT EDIT.
// Generated by generate_entry_points.py using data from gl.xml.
//
// Copyright 2019 The ANGLE Project Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//
// entry_points_gl_3_1_autogen.cpp:
//   Defines the GL 3.1 entry points.

#include "openGL32/entry_points_gl_3_1_autogen.h"

#include "libANGLE/Context.h"
#include "libANGLE/Context.inl.h"
#include "libANGLE/validationEGL.h"
#include "libANGLE/validationES.h"
#include "libANGLE/validationES1.h"
#include "libANGLE/validationES2.h"
#include "libANGLE/validationES3.h"
#include "libANGLE/validationES31.h"
#include "libANGLE/validationESEXT.h"
#include "libANGLE/validationGL31_autogen.h"
#include "libGLESv2/global_state.h"
#include "openGL32/entry_points_utils.h"

namespace gl
{
void GL_APIENTRY CopyBufferSubData(GLenum readTarget,
                                   GLenum writeTarget,
                                   GLintptr readOffset,
                                   GLintptr writeOffset,
                                   GLsizeiptr size)
{
    EVENT(
        "(GLenum readTarget = 0x%X, GLenum writeTarget = 0x%X, GLintptr readOffset = %llu, "
        "GLintptr writeOffset = %llu, GLsizeiptr size = %llu)",
        readTarget, writeTarget, static_cast<unsigned long long>(readOffset),
        static_cast<unsigned long long>(writeOffset), static_cast<unsigned long long>(size));

    Context *context = GetValidGlobalContext();
    if (context)
    {
        BufferBinding readTargetPacked  = FromGLenum<BufferBinding>(readTarget);
        BufferBinding writeTargetPacked = FromGLenum<BufferBinding>(writeTarget);
        if (context->skipValidation() ||
            ValidateCopyBufferSubData(context, readTargetPacked, writeTargetPacked, readOffset,
                                      writeOffset, size))
        {
            context->copyBufferSubData(readTargetPacked, writeTargetPacked, readOffset, writeOffset,
                                       size);
        }
    }
}

void GL_APIENTRY DrawArraysInstanced(GLenum mode, GLint first, GLsizei count, GLsizei instancecount)
{
    EVENT("(GLenum mode = 0x%X, GLint first = %d, GLsizei count = %d, GLsizei instancecount = %d)",
          mode, first, count, instancecount);

    Context *context = GetValidGlobalContext();
    if (context)
    {
        PrimitiveMode modePacked = FromGLenum<PrimitiveMode>(mode);
        if (context->skipValidation() ||
            ValidateDrawArraysInstanced(context, modePacked, first, count, instancecount))
        {
            context->drawArraysInstanced(modePacked, first, count, instancecount);
        }
    }
}

void GL_APIENTRY DrawElementsInstanced(GLenum mode,
                                       GLsizei count,
                                       GLenum type,
                                       const void *indices,
                                       GLsizei instancecount)
{
    EVENT(
        "(GLenum mode = 0x%X, GLsizei count = %d, GLenum type = 0x%X, const void *indices = "
        "0x%016" PRIxPTR ", GLsizei instancecount = %d)",
        mode, count, type, (uintptr_t)indices, instancecount);

    Context *context = GetValidGlobalContext();
    if (context)
    {
        PrimitiveMode modePacked    = FromGLenum<PrimitiveMode>(mode);
        DrawElementsType typePacked = FromGLenum<DrawElementsType>(type);
        if (context->skipValidation() ||
            ValidateDrawElementsInstanced(context, modePacked, count, typePacked, indices,
                                          instancecount))
        {
            context->drawElementsInstanced(modePacked, count, typePacked, indices, instancecount);
        }
    }
}

void GL_APIENTRY GetActiveUniformBlockName(GLuint program,
                                           GLuint uniformBlockIndex,
                                           GLsizei bufSize,
                                           GLsizei *length,
                                           GLchar *uniformBlockName)
{
    EVENT(
        "(GLuint program = %u, GLuint uniformBlockIndex = %u, GLsizei bufSize = %d, GLsizei "
        "*length = 0x%016" PRIxPTR ", GLchar *uniformBlockName = 0x%016" PRIxPTR ")",
        program, uniformBlockIndex, bufSize, (uintptr_t)length, (uintptr_t)uniformBlockName);

    Context *context = GetValidGlobalContext();
    if (context)
    {
        if (context->skipValidation() ||
            ValidateGetActiveUniformBlockName(context, program, uniformBlockIndex, bufSize, length,
                                              uniformBlockName))
        {
            context->getActiveUniformBlockName(program, uniformBlockIndex, bufSize, length,
                                               uniformBlockName);
        }
    }
}

void GL_APIENTRY GetActiveUniformBlockiv(GLuint program,
                                         GLuint uniformBlockIndex,
                                         GLenum pname,
                                         GLint *params)
{
    EVENT(
        "(GLuint program = %u, GLuint uniformBlockIndex = %u, GLenum pname = 0x%X, GLint *params = "
        "0x%016" PRIxPTR ")",
        program, uniformBlockIndex, pname, (uintptr_t)params);

    Context *context = GetValidGlobalContext();
    if (context)
    {
        if (context->skipValidation() ||
            ValidateGetActiveUniformBlockiv(context, program, uniformBlockIndex, pname, params))
        {
            context->getActiveUniformBlockiv(program, uniformBlockIndex, pname, params);
        }
    }
}

void GL_APIENTRY GetActiveUniformName(GLuint program,
                                      GLuint uniformIndex,
                                      GLsizei bufSize,
                                      GLsizei *length,
                                      GLchar *uniformName)
{
    EVENT(
        "(GLuint program = %u, GLuint uniformIndex = %u, GLsizei bufSize = %d, GLsizei *length = "
        "0x%016" PRIxPTR ", GLchar *uniformName = 0x%016" PRIxPTR ")",
        program, uniformIndex, bufSize, (uintptr_t)length, (uintptr_t)uniformName);

    Context *context = GetValidGlobalContext();
    if (context)
    {
        if (context->skipValidation() ||
            ValidateGetActiveUniformName(context, program, uniformIndex, bufSize, length,
                                         uniformName))
        {
            context->getActiveUniformName(program, uniformIndex, bufSize, length, uniformName);
        }
    }
}

void GL_APIENTRY GetActiveUniformsiv(GLuint program,
                                     GLsizei uniformCount,
                                     const GLuint *uniformIndices,
                                     GLenum pname,
                                     GLint *params)
{
    EVENT(
        "(GLuint program = %u, GLsizei uniformCount = %d, const GLuint *uniformIndices = "
        "0x%016" PRIxPTR ", GLenum pname = 0x%X, GLint *params = 0x%016" PRIxPTR ")",
        program, uniformCount, (uintptr_t)uniformIndices, pname, (uintptr_t)params);

    Context *context = GetValidGlobalContext();
    if (context)
    {
        if (context->skipValidation() || ValidateGetActiveUniformsiv(context, program, uniformCount,
                                                                     uniformIndices, pname, params))
        {
            context->getActiveUniformsiv(program, uniformCount, uniformIndices, pname, params);
        }
    }
}

GLuint GL_APIENTRY GetUniformBlockIndex(GLuint program, const GLchar *uniformBlockName)
{
    EVENT("(GLuint program = %u, const GLchar *uniformBlockName = 0x%016" PRIxPTR ")", program,
          (uintptr_t)uniformBlockName);

    Context *context = GetValidGlobalContext();
    if (context)
    {
        if (context->skipValidation() ||
            ValidateGetUniformBlockIndex(context, program, uniformBlockName))
        {
            return context->getUniformBlockIndex(program, uniformBlockName);
        }
    }

    return GetDefaultReturnValue<EntryPoint::GetUniformBlockIndex, GLuint>();
}

void GL_APIENTRY GetUniformIndices(GLuint program,
                                   GLsizei uniformCount,
                                   const GLchar *const *uniformNames,
                                   GLuint *uniformIndices)
{
    EVENT(
        "(GLuint program = %u, GLsizei uniformCount = %d, const GLchar *const*uniformNames = "
        "0x%016" PRIxPTR ", GLuint *uniformIndices = 0x%016" PRIxPTR ")",
        program, uniformCount, (uintptr_t)uniformNames, (uintptr_t)uniformIndices);

    Context *context = GetValidGlobalContext();
    if (context)
    {
        if (context->skipValidation() ||
            ValidateGetUniformIndices(context, program, uniformCount, uniformNames, uniformIndices))
        {
            context->getUniformIndices(program, uniformCount, uniformNames, uniformIndices);
        }
    }
}

void GL_APIENTRY PrimitiveRestartIndex(GLuint index)
{
    EVENT("(GLuint index = %u)", index);

    Context *context = GetValidGlobalContext();
    if (context)
    {
        if (context->skipValidation() || ValidatePrimitiveRestartIndex(context, index))
        {
            context->primitiveRestartIndex(index);
        }
    }
}

void GL_APIENTRY TexBuffer(GLenum target, GLenum internalformat, GLuint buffer)
{
    EVENT("(GLenum target = 0x%X, GLenum internalformat = 0x%X, GLuint buffer = %u)", target,
          internalformat, buffer);

    Context *context = GetValidGlobalContext();
    if (context)
    {
        if (context->skipValidation() || ValidateTexBuffer(context, target, internalformat, buffer))
        {
            context->texBuffer(target, internalformat, buffer);
        }
    }
}

void GL_APIENTRY UniformBlockBinding(GLuint program,
                                     GLuint uniformBlockIndex,
                                     GLuint uniformBlockBinding)
{
    EVENT("(GLuint program = %u, GLuint uniformBlockIndex = %u, GLuint uniformBlockBinding = %u)",
          program, uniformBlockIndex, uniformBlockBinding);

    Context *context = GetValidGlobalContext();
    if (context)
    {
        if (context->skipValidation() ||
            ValidateUniformBlockBinding(context, program, uniformBlockIndex, uniformBlockBinding))
        {
            context->uniformBlockBinding(program, uniformBlockIndex, uniformBlockBinding);
        }
    }
}
}  // namespace gl