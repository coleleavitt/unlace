unsigned __int64 __fastcall sub_15740(__int64 a1, __int64 a2)
{
  unsigned int v2; // edx
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // r12
  __int64 v6; // rbx
  _QWORD *v8; // rdx
  int *v9; // rax
  _QWORD *v10; // rax
  __int128 v11; // [rsp+0h] [rbp-198h] BYREF
  __int64 v12; // [rsp+10h] [rbp-188h]
  __int64 v13; // [rsp+18h] [rbp-180h]
  __int64 v14; // [rsp+20h] [rbp-178h]
  _BYTE v15[320]; // [rsp+28h] [rbp-170h] BYREF
  _QWORD v16[6]; // [rsp+168h] [rbp-30h] BYREF

  v2 = *(_DWORD *)a2;
  v16[0] = __readfsqword(0x28u);
  if ( v2 > 0x2F )
  {
    v8 = *(_QWORD **)(a2 + 8);
    v9 = (int *)(v8 + 1);
    *(_QWORD *)(a2 + 8) = v8 + 1;
    v5 = *v8;
  }
  else
  {
    v3 = *(_QWORD *)(a2 + 16);
    v4 = v2 + 8;
    *(_DWORD *)a2 = v4;
    v5 = *(_QWORD *)(v3 + v2);
    if ( (unsigned int)v4 <= 0x2F )
    {
      *(_DWORD *)a2 = v2 + 16;
      v6 = *(int *)(v4 + v3);
      if ( (unsigned int)v6 > 7 )
        return v16[0] - __readfsqword(0x28u);
      goto LABEL_7;
    }
    v9 = *(int **)(a2 + 8);
  }
  *(_QWORD *)(a2 + 8) = v9 + 2;
  v6 = *v9;
  if ( (unsigned int)v6 > 7 )
    return v16[0] - __readfsqword(0x28u);
LABEL_7:
  if ( (~((unsigned __int16)get_flags_ex(v5, 4) >> 8) & 6) == 0 )
  {
    v12 = -1;
    v10 = v15;
    v13 = 0;
    v14 = 0;
    v11 = -1;
    do
    {
      *(_WORD *)v10 = 0;
      v10 += 5;
      *((_WORD *)v10 - 19) = 0;
      *((_WORD *)v10 - 18) = 0;
      *((_DWORD *)v10 - 2) = 0;
      *((_WORD *)v10 - 17) = 0;
      *((_OWORD *)v10 - 2) = 0;
      *(v10 - 2) = 0;
    }
    while ( v16 != v10 );
    decode_insn(&v11, v5, v16, 0.0);
    if ( v15[40 * v6 + 1] == 2 )
      sub_DE80(
        *(_QWORD *)(a1 + 16),
        &v11,
        (unsigned __int8 *)&v11 + 40 * v6 + 40,
        *(_QWORD *)&v15[40 * v6 + 16] + 16 * v11,
        nullptr,
        1);
  }
  return v16[0] - __readfsqword(0x28u);
}

