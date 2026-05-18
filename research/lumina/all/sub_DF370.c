__int64 __fastcall sub_DF370(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rbp
  __int64 *v7; // rbx
  __int64 result; // rax
  __int64 v9; // rdx
  unsigned __int64 v10; // rdx

  v6 = *(_QWORD *)(a1 + 24);
  if ( (*(_WORD *)(a1 + 20) & 0x9000) != 0 || (a4 = *(unsigned int *)(a1 + 32), (_DWORD)a4) )
    sub_C9690(a1, a2, a3, a4, a5, a6);
  v7 = sub_DBF10(v6, 56);
  result = 7;
  if ( v7 )
  {
    if ( !v6 || *(_QWORD *)(v6 + 488) <= (unsigned __int64)v7 )
      goto LABEL_5;
    LOWORD(v10) = 3;
    if ( *(_QWORD *)(v6 + 472) <= (unsigned __int64)v7 )
      goto LABEL_7;
    if ( *(_QWORD *)(v6 + 480) <= (unsigned __int64)v7 )
      v9 = *(unsigned __int16 *)(v6 + 414);
    else
LABEL_5:
      v9 = ((int (__fastcall *)(__int64 *))*(&xmmword_2414B0 + 1))(v7);
    v10 = (v9 - 56) / 0x18uLL;
LABEL_7:
    *((_WORD *)v7 + 24) = v10;
    *v7 = 0;
    v7[1] = v6;
    v7[4] = (__int64)(v7 + 7);
    v7[2] = 0;
    *((_WORD *)v7 + 25) = 1;
    v7[3] = 0;
    v7[5] = 0;
    *((_DWORD *)v7 + 13) = 0;
    *(_QWORD *)(a1 + 48) = sub_D7510;
    *(_QWORD *)(a1 + 8) = v7;
    result = 0;
    *(_WORD *)(a1 + 20) = 4112;
  }
  return result;
}
