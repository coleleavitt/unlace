__int64 __fastcall sub_3AC40(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int16 v3; // ax
  __int64 v5; // r15
  __int16 v6; // r12
  __int64 v7; // r8
  __int16 v8; // bp
  __int64 v9; // rbx
  _QWORD *v10; // rdi
  unsigned int v11; // ebx
  _BOOL8 v13; // rax
  __int64 *v14; // [rsp+0h] [rbp-B8h]
  __int64 v15; // [rsp+8h] [rbp-B0h]
  __m128i v16; // [rsp+10h] [rbp-A8h] BYREF
  _QWORD v17[8]; // [rsp+20h] [rbp-98h] BYREF
  _BYTE *v18; // [rsp+60h] [rbp-58h] BYREF
  __int128 v19; // [rsp+68h] [rbp-50h]
  unsigned __int64 v20; // [rsp+78h] [rbp-40h]

  v3 = *(_WORD *)(a3 + 24);
  v20 = __readfsqword(0x28u);
  if ( v3 <= 0x1Bu )
  {
    if ( v3 > 0x19u )
    {
      v7 = ((get_wide_dword() & 0x80000) != 0) + 2LL;
      v13 = *(_WORD *)(a3 + 24) != 27;
      v5 = *(_QWORD *)(a3 + 40 * v13 + 48);
      v6 = *(_WORD *)(a3 + 8 * (5 * v13 + 5) + 46);
      v8 = *(_WORD *)(a3 + 8 * (5 * v13 + 10) + 46);
      v9 = *(_QWORD *)(a3 + 8 * (5 * v13 + 15) + 48);
      v14 = &qword_AA610;
      goto LABEL_4;
    }
    return 0;
  }
  if ( v3 != 535 )
    return 0;
  v5 = *(_QWORD *)(a3 + 48);
  v6 = *(_WORD *)(a3 + 86);
  v7 = 1;
  v14 = &qword_AA5F0;
  v8 = *(_WORD *)(a3 + 126);
  v9 = *(_QWORD *)(a3 + 168);
LABEL_4:
  v16 = 0;
  v10 = v17;
  do
  {
    *(_OWORD *)v10 = 0;
    v10 += 4;
    *((_OWORD *)v10 - 1) = 0;
  }
  while ( v10 != &v18 );
  v15 = v7;
  v18 = nullptr;
  v19 = 0;
  v18 = (_BYTE *)qvector_reserve();
  *(_QWORD *)&v19 = 1;
  *v18 = 0;
  v16 = (__m128i)(unsigned __int64)v15;
  v17[0] = v5 & 0xF;
  v17[1] = 0;
  v17[2] = v6 & 0xF;
  v17[3] = 0;
  v17[4] = v8 & 0xF;
  v17[5] = 0;
  v17[6] = v9 & 0xF;
  v17[7] = 0;
  v11 = sub_39280(a2, v14, &v16, nullptr);
  if ( v18 )
  {
    *(_QWORD *)&v19 = 0;
    qfree();
  }
  return v11;
}

