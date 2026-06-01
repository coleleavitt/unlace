__int64 __fastcall sub_A2C0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 (__fastcall *a5)(const char *, __int64),
        __int64 a6)
{
  unsigned __int64 *v11; // rax
  __int64 v12; // rdx
  bool v13; // cl
  int v14; // esi
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rdx
  _BYTE v21[320]; // [rsp+28h] [rbp-170h] BYREF
  unsigned __int64 v22; // [rsp+168h] [rbp-30h] BYREF

  v22 = __readfsqword(0x28u);
  if ( a4 > 2 )
    return 0;
  v11 = (unsigned __int64 *)v21;
  do
  {
    *(_WORD *)v11 = 0;
    v11 += 5;
    *((_WORD *)v11 - 19) = 0;
    *((_WORD *)v11 - 18) = 0;
    *((_DWORD *)v11 - 2) = 0;
    *((_WORD *)v11 - 17) = 0;
    *((_OWORD *)v11 - 2) = 0;
    *(v11 - 2) = 0;
  }
  while ( v11 != &v22 );
  if ( (int)decode_insn() <= 0 )
    return 0;
  v12 = *(_QWORD *)(a1 + 16);
  v13 = 0;
  v14 = *(_DWORD *)(v12 + 104);
  if ( v14 <= 0 && *(int *)(v12 + 108) > 0 )
    v13 = (dword_111C0[a4] & *(_DWORD *)(*(_QWORD *)(v12 + 112) + 16LL * -v14 + 8)) != 0;
  *(_BYTE *)a2 = v13;
  if ( v21[40 * a4 + 1] > 7u )
    return 0;
  switch ( v21[40 * a4 + 1] )
  {
    case 0:
    case 6:
      return 0;
    case 1:
      v17 = *(unsigned __int16 *)&v21[40 * a4 + 6];
      v16 = 0;
      if ( (unsigned __int16)v17 <= 0x31u )
        v16 = sub_A140(a1, *(const char **)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 56LL) + 8 * v17), a5, a6);
      break;
    case 2:
    case 7:
      v15 = *(_QWORD *)&v21[40 * a4 + 16];
      goto LABEL_12;
    case 3:
      v20 = *(unsigned __int16 *)&v21[40 * a4 + 6];
      v15 = 0;
      if ( (unsigned __int16)v20 <= 0x31u )
        v15 = sub_A140(a1, *(const char **)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 56LL) + 8 * v20), a5, a6);
      goto LABEL_12;
    case 4:
      v18 = *(unsigned __int16 *)&v21[40 * a4 + 6];
      v19 = 0;
      if ( (unsigned __int16)v18 <= 0x31u )
        v19 = sub_A140(a1, *(const char **)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 56LL) + 8 * v18), a5, a6);
      v15 = *(_QWORD *)&v21[40 * a4 + 16] + v19;
LABEL_12:
      *(_QWORD *)(a2 + 8) = v15;
      v16 = 0;
      break;
    case 5:
      v16 = *(_QWORD *)&v21[40 * a4 + 8];
      break;
  }
  *(_QWORD *)(a2 + 24) = v16;
  *(_DWORD *)(a2 + 52) = get_dtype_size();
  return 1;
}

