__int64 __fastcall sub_EF80(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 (__fastcall *a5)(__int64, __int64),
        __int64 a6)
{
  _QWORD *v11; // rax
  __int64 v12; // rdx
  bool v13; // cl
  int v14; // esi
  __int64 v15; // rdx
  __int64 v16; // rax
  __int128 v17; // [rsp+0h] [rbp-1A8h] BYREF
  __int64 v18; // [rsp+10h] [rbp-198h]
  __int64 v19; // [rsp+18h] [rbp-190h]
  __int64 v20; // [rsp+20h] [rbp-188h]
  _BYTE v21[320]; // [rsp+28h] [rbp-180h] BYREF
  _QWORD v22[8]; // [rsp+168h] [rbp-40h] BYREF

  v22[0] = __readfsqword(0x28u);
  if ( a4 > 4 )
    return 0;
  v17 = -1;
  v18 = -1;
  v11 = v21;
  v19 = 0;
  v20 = 0;
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
  while ( v11 != v22 );
  if ( (int)decode_insn(&v17, a3, v22, 0.0) <= 0 )
    return 0;
  v12 = *(_QWORD *)(a1 + 16);
  v13 = 0;
  v14 = *(_DWORD *)(v12 + 104);
  if ( (unsigned __int16)v19 >= v14 && (unsigned __int16)v19 < *(int *)(v12 + 108) )
    v13 = (dword_16E60[a4] & *(_DWORD *)(*(_QWORD *)(v12 + 112) + 16LL * ((unsigned __int16)v19 - v14) + 8)) != 0;
  *(_BYTE *)a2 = v13;
  if ( v21[40 * a4 + 1] > 0xCu )
    return 0;
  switch ( v21[40 * a4 + 1] )
  {
    case 0:
    case 6:
      return 0;
    case 1:
      v16 = sub_E8D0(a1, *(unsigned __int16 *)&v21[40 * a4 + 6], a5, a6);
      v15 = -1;
      break;
    case 2:
    case 3:
    case 4:
    case 7:
      v15 = sub_E930(a1, (__int64)&v17 + 40 * (int)a4 + 40, a5, a6);
      v16 = 0;
      break;
    case 5:
      v15 = -1;
      v16 = *(_QWORD *)&v21[40 * a4 + 8];
      break;
    case 8:
    case 9:
    case 0xA:
    case 0xB:
    case 0xC:
      v15 = -1;
      v16 = 0;
      break;
  }
  *(_QWORD *)(a2 + 24) = v16;
  *(_QWORD *)(a2 + 8) = v15;
  *(_DWORD *)(a2 + 52) = get_dtype_size((unsigned __int8)v21[40 * a4 + 5]);
  return 1;
}
