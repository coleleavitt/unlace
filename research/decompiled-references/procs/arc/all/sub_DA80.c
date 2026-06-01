__int64 __fastcall sub_DA80(unsigned __int64 *a1)
{
  char *v1; // rax
  _QWORD *v2; // rdx
  unsigned __int64 v3; // rbx
  int v4; // ebp
  __int16 v5; // ax
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int128 v10; // [rsp+0h] [rbp-198h] BYREF
  __int64 v11; // [rsp+10h] [rbp-188h]
  __int64 v12; // [rsp+18h] [rbp-180h]
  __int64 v13; // [rsp+20h] [rbp-178h]
  char v14; // [rsp+28h] [rbp-170h] BYREF
  char v15; // [rsp+29h] [rbp-16Fh]
  __int16 v16; // [rsp+2Eh] [rbp-16Ah]
  char v17; // [rsp+40h] [rbp-158h]
  char v18; // [rsp+51h] [rbp-147h]
  __int16 v19; // [rsp+56h] [rbp-142h]
  char v20; // [rsp+79h] [rbp-11Fh]
  __int64 v21; // [rsp+80h] [rbp-118h]
  _QWORD v22[6]; // [rsp+168h] [rbp-30h] BYREF

  v22[0] = __readfsqword(0x28u);
  v1 = &v14;
  v10 = -1;
  v2 = v22;
  v11 = -1;
  v12 = 0;
  v13 = 0;
  v3 = *a1;
  do
  {
    *(_WORD *)v1 = 0;
    v1 += 40;
    *((_WORD *)v1 - 19) = 0;
    *((_WORD *)v1 - 18) = 0;
    *((_DWORD *)v1 - 2) = 0;
    *((_WORD *)v1 - 17) = 0;
    *((_OWORD *)v1 - 2) = 0;
    *((_QWORD *)v1 - 2) = 0;
  }
  while ( v22 != (_QWORD *)v1 );
  v4 = 10;
  while ( 1 )
  {
    if ( v3 >= a1[1] || !(unsigned int)decode_insn(&v10, v3, v2, 0.0) )
      return 0;
    v5 = v12;
    if ( (_WORD)v12 == 27 )
      break;
    if ( (_WORD)v12 != 156 )
      goto LABEL_7;
    if ( (v17 & 0x10) != 0 )
      goto LABEL_6;
LABEL_9:
    v3 += WORD1(v12);
    if ( !--v4 )
      return 0;
  }
  if ( v15 != 1 || v16 != 27 || v18 != 1 || v19 != 28 )
    goto LABEL_9;
LABEL_6:
  a1[2] |= 0x10u;
  update_func(a1, v3, v2, v6, v7, v8, v10, *((_QWORD *)&v10 + 1), v11);
  v5 = v12;
LABEL_7:
  if ( v5 != 21 || v15 != 1 || v16 != 28 || v18 != 1 || v19 != 28 || v20 != 5 )
    goto LABEL_9;
  return add_frame(a1, v21, 0, 0);
}
