__int64 __fastcall sub_F1C0(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, unsigned int a5, char a6)
{
  __int64 v8; // rax
  __int64 v9; // r13
  unsigned int v10; // ebx
  unsigned __int64 *v12; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rdx
  int v16; // r15d
  unsigned __int64 v17; // r12
  __int64 v18; // r14
  int v20; // [rsp+14h] [rbp-1CCh] BYREF
  __int64 *v21; // [rsp+18h] [rbp-1C8h] BYREF
  __int128 v22; // [rsp+20h] [rbp-1C0h]
  char v23; // [rsp+30h] [rbp-1B0h]
  __int128 v24; // [rsp+38h] [rbp-1A8h] BYREF
  __int64 v25; // [rsp+48h] [rbp-198h]
  __int64 v26; // [rsp+50h] [rbp-190h]
  __int64 v27; // [rsp+58h] [rbp-188h]
  char v28; // [rsp+60h] [rbp-180h] BYREF
  __int64 v29; // [rsp+68h] [rbp-178h]
  unsigned __int16 v30; // [rsp+8Eh] [rbp-152h]
  unsigned __int64 v31; // [rsp+1A0h] [rbp-40h] BYREF

  v31 = __readfsqword(0x28u);
  v23 = 0;
  v21 = nullptr;
  v22 = 0;
  v8 = sub_F010((_QWORD *)a1, a2, a5, &v21);
  v9 = v8;
  if ( a6
    && ((unsigned __int64)(v8 - 1) > 0xFFFFFFFFFFFFFFFDLL
     || !(unsigned __int8)sub_EA00(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) & (a4 + v8), 1u)) )
  {
    goto LABEL_3;
  }
  v25 = -1;
  v12 = (unsigned __int64 *)&v28;
  v26 = 0;
  v27 = 0;
  v24 = -1;
  do
  {
    *(_WORD *)v12 = 0;
    v12 += 5;
    *((_WORD *)v12 - 19) = 0;
    *((_WORD *)v12 - 18) = 0;
    *((_DWORD *)v12 - 2) = 0;
    *((_WORD *)v12 - 17) = 0;
    *((_OWORD *)v12 - 2) = 0;
    *(v12 - 2) = 0;
  }
  while ( &v31 != v12 );
  if ( !v23
    || (unsigned int)(a4 + 0x8000) > 0xFFFF
    || *((_WORD *)v21 + 8) != 36
    || (int)decode_insn(&v24, v21[1], 0.0) <= 0 )
  {
    v20 = 672;
    if ( v9 != -1 )
    {
      sub_ED20(&v20, (__int64)&v21);
      v10 = op_offset(a2, a3, v20 | 2u, -1, v9, 0);
      goto LABEL_4;
    }
    goto LABEL_3;
  }
  v13 = *(_QWORD *)(a1 + 32);
  v20 = 672;
  a4 = (__int16)a4;
  v14 = *(_QWORD *)(v13 + 16);
  if ( v9 == -1 )
  {
    v17 = v14 & (a4 + (v29 << 16));
    if ( !(unsigned __int8)sub_EA00(v17, 0) )
      goto LABEL_3;
    v15 = 676;
    v16 = 672;
    v18 = 0;
  }
  else
  {
    v15 = 676;
    v16 = 672;
    v17 = v14 & (v9 + a4);
    if ( (unsigned __int8)(v23 - 10) <= 1u )
    {
      if ( !(unsigned __int8)sub_17080(a1, &v21, v25, v30, 0, 0) )
      {
        if ( !under_debugger )
          interr(0);
        BUG();
      }
      sub_ED20(&v20, (__int64)&v21);
      v16 = v20;
      v14 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL);
      v15 = v20 | 4u;
    }
    v18 = v14 & (v9 - (v29 << 16));
  }
  v10 = op_offset(a2, a3, v15, v17, v18, 0);
  if ( !(_BYTE)v10 )
  {
LABEL_3:
    v10 = 0;
    goto LABEL_4;
  }
  if ( (get_flags_ex(v25, 4) & 0xF00000) == 0 )
    op_offset(v25, 0, (unsigned int)v16 | *(_DWORD *)(a1 + 260), v17, v18, 0);
LABEL_4:
  if ( v21 )
  {
    *(_QWORD *)&v22 = 0;
    qfree(v21);
  }
  return v10;
}

