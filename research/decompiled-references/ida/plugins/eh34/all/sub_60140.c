__int64 __fastcall sub_60140(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  void (__fastcall *hexdsp)(__int64, _QWORD *, __int64, __int64); // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  unsigned __int64 v12; // r13
  __int64 v13; // rbp
  __int64 v14; // r12
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r14
  __int64 *v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rsi
  _QWORD v24[7]; // [rsp+0h] [rbp-38h] BYREF

  v24[1] = __readfsqword(0x28u);
  hexdsp = (void (__fastcall *)(__int64, _QWORD *, __int64, __int64))get_hexdsp(a1, (const char *)a2);
  hexdsp(417, v24, a2, a3);
  v10 = sub_6DD00(a2, *(unsigned int *)(a2 + 64), v24[0], a4);
  v11 = a1[25];
  v12 = a1[26];
  v13 = v10;
  v24[0] = *a5;
  if ( v12 < v11 + 1 )
  {
    v16 = qvector_reserve(a1 + 24, 0, v11 + 1, 8);
    v17 = a1[25];
    v18 = a1[26];
    a1[26] = v12;
    v19 = (__int64 *)a1[24];
    v14 = v16;
    v20 = v17 - 1;
    if ( v20 >= 0 )
    {
      v21 = v16;
      do
      {
        v22 = *v19;
        v21 += 8;
        ++v19;
        *(_QWORD *)(v21 - 8) = v22;
      }
      while ( v20-- != 0 );
      v19 = (__int64 *)a1[24];
    }
    qfree(v19);
    a1[24] = v14;
    v11 = a1[25];
    a1[26] = v18;
  }
  else
  {
    v14 = a1[24];
  }
  *(_QWORD *)(v14 + 8 * v11) = v24[0];
  ++a1[25];
  return v13;
}

