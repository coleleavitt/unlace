__int64 __fastcall sub_E680(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        signed int a4,
        __int64 (__fastcall *a5)(_QWORD, __int64),
        __int64 a6)
{
  _QWORD *v11; // rax
  __int64 v12; // rdx
  bool v13; // cl
  int v14; // esi
  char *v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rax
  int v18; // r15d
  char v19; // al
  __int64 v20; // rax
  __int64 v21; // rax
  int dtype_size; // edx
  unsigned __int16 v23; // ax
  __int128 v24; // [rsp+10h] [rbp-1A8h] BYREF
  __int64 v25; // [rsp+20h] [rbp-198h]
  __int64 v26; // [rsp+28h] [rbp-190h]
  __int64 v27; // [rsp+30h] [rbp-188h]
  _BYTE v28[320]; // [rsp+38h] [rbp-180h] BYREF
  _QWORD v29[8]; // [rsp+178h] [rbp-40h] BYREF

  v29[0] = __readfsqword(0x28u);
  if ( (unsigned int)a4 > 5 )
    return 0;
  v24 = -1;
  v25 = -1;
  v11 = v28;
  v26 = 0;
  v27 = 0;
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
  while ( v29 != v11 );
  if ( (int)decode_insn(&v24, a3, v29, 0.0) <= 0 )
    return 0;
  v12 = *(_QWORD *)(a1 + 16);
  v13 = 0;
  v14 = *(_DWORD *)(v12 + 104);
  if ( (unsigned __int16)v26 >= v14 && (unsigned __int16)v26 < *(int *)(v12 + 108) )
    v13 = (dword_15FC0[a4] & *(_DWORD *)(*(_QWORD *)(v12 + 112) + 16LL * ((unsigned __int16)v26 - v14) + 8)) != 0;
  *(_BYTE *)a2 = v13;
  v15 = (char *)&v24 + 40 * a4 + 40;
  v16 = 40LL * a4;
  if ( v28[v16 + 1] > 9u )
    return 0;
  switch ( v28[40 * a4 + 1] )
  {
    case 0:
    case 3:
    case 6:
    case 8:
      return 0;
    case 1:
      v18 = 2;
      v19 = v28[40 * a4 + 33];
      if ( (v19 & 3) == 0 )
      {
        v18 = 1;
        if ( (v19 & 0x3C) == 0 )
        {
          dtype_size = get_dtype_size((unsigned __int8)v28[40 * a4 + 6], v15, 40LL * a4);
          v23 = 128;
          if ( dtype_size <= 15 )
          {
            v23 = 32;
            if ( dtype_size > 7 )
              v23 = 64;
          }
          v18 = v23 >> 3;
        }
      }
      v20 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) & sub_DC60(a1, (__int64)v15, a5, a6);
      *(_DWORD *)(a2 + 52) = v18;
      *(_QWORD *)(a2 + 24) = v20;
      return 1;
    case 2:
    case 7:
      *(_QWORD *)(a2 + 8) = *(_QWORD *)&v28[40 * a4 + 16];
      goto LABEL_15;
    case 4:
      v21 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) & sub_DC60(a1, (__int64)v15, a5, a6);
      v16 = 40LL * a4;
      *(_QWORD *)(a2 + 8) = v21;
      if ( (v28[v16 + 32] & 0x26) == 0x20 )
      {
        *(_QWORD *)(a2 + 8) = *(_QWORD *)&v28[40 * a4 + 16] + v21;
        v17 = 0;
      }
      else
      {
LABEL_15:
        v17 = 0;
      }
      break;
    case 5:
    case 9:
      v17 = *(_QWORD *)&v28[40 * a4 + 8];
      break;
  }
  *(_QWORD *)(a2 + 24) = v17;
  *(_DWORD *)(a2 + 52) = get_dtype_size((unsigned __int8)v28[40 * a4 + 5], v15, v16);
  return 1;
}
