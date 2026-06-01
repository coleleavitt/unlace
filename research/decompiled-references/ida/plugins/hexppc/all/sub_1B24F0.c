const char *__fastcall sub_1B24F0(unsigned __int64 *a1)
{
  __int64 module_data; // rax
  __int64 v2; // r12
  __int64 v3; // r13
  int v4; // edx
  __int64 v5; // rbx
  const char *result; // rax
  __int64 v7; // rbp
  unsigned __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // rbp
  __m128i si128; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v13; // [rsp+18h] [rbp-40h]

  v13 = __readfsqword(0x28u);
  module_data = get_module_data();
  v2 = *(_QWORD *)(module_data + 1024);
  v3 = *(int *)(v2 + 384);
  v4 = *(_DWORD *)(v2 + 384) + 1;
  v5 = v2 + 24 * v3 + 144;
  *(_DWORD *)(v2 + 384) = v4;
  if ( v4 == 10 )
    *(_DWORD *)(*(_QWORD *)(module_data + 1024) + 384LL) = 0;
  *(_QWORD *)(v2 + 24 * v3 + 152) = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_411C00);
  if ( (unsigned int)sub_312DC0(a1, &si128) )
  {
    sub_1AF9D0(a1, (__int64 *)(v2 + 24 * v3 + 144));
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v2 + 24 * v3 + 152);
  if ( v7 )
  {
    v9 = v7 + 5;
    v8 = v7 + 6;
    --v7;
    if ( *(_QWORD *)(v2 + 24 * v3 + 160) >= v8 )
      goto LABEL_10;
LABEL_12:
    *(_QWORD *)(v2 + 24 * v3 + 144) = qvector_reserve();
    goto LABEL_10;
  }
  v8 = 7;
  v9 = 6;
  if ( *(_QWORD *)(v2 + 24 * v3 + 160) < 7u )
    goto LABEL_12;
LABEL_10:
  v10 = *(_QWORD *)v5;
  *(_QWORD *)(v2 + 24 * v3 + 152) = v8;
  *(_BYTE *)(v10 + v9) = 0;
  v11 = *(_QWORD *)v5 + v7;
  *(_DWORD *)v11 = 1296845889;
  *(_WORD *)(v11 + 4) = 19781;
LABEL_5:
  result = s1;
  if ( *(_QWORD *)(v2 + 24 * v3 + 152) )
    return *(const char **)v5;
  return result;
}

