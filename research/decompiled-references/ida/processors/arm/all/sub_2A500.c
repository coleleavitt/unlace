unsigned __int64 __fastcall sub_2A500(__int64 a1, __int64 a2)
{
  unsigned __int64 *v4; // rax
  char v6; // al
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 *v9; // rax
  __int64 v10; // rdx
  __int64 *v11; // [rsp+0h] [rbp-1A8h] BYREF
  __int128 v12; // [rsp+8h] [rbp-1A0h]
  char v13; // [rsp+18h] [rbp-190h]
  __int128 v14; // [rsp+20h] [rbp-188h] BYREF
  __int64 v15; // [rsp+30h] [rbp-178h]
  __int64 v16; // [rsp+38h] [rbp-170h]
  __int64 v17; // [rsp+40h] [rbp-168h]
  char v18; // [rsp+48h] [rbp-160h] BYREF
  _BYTE v19[280]; // [rsp+70h] [rbp-138h] BYREF
  unsigned __int64 v20; // [rsp+188h] [rbp-20h] BYREF

  v20 = __readfsqword(0x28u);
  if ( *(_WORD *)(a2 + 16) != 30 )
    return v20 - __readfsqword(0x28u);
  v4 = (unsigned __int64 *)&v18;
  v14 = -1;
  v15 = -1;
  v16 = 0;
  v17 = 0;
  do
  {
    *(_WORD *)v4 = 0;
    v4 += 5;
    *((_WORD *)v4 - 19) = 0;
    *((_WORD *)v4 - 18) = 0;
    *((_DWORD *)v4 - 2) = 0;
    *((_WORD *)v4 - 17) = 0;
    *((_OWORD *)v4 - 2) = 0;
    *(v4 - 2) = 0;
  }
  while ( v4 != &v20 );
  if ( (int)decode_insn() <= 0 )
    return v20 - __readfsqword(0x28u);
  v11 = 0;
  v13 = 0;
  v12 = 0;
  v6 = sub_82140(a1, &v11, v19, &v14, 1, 0);
  v7 = (__int64)v11;
  if ( v6 && (unsigned __int8)(v13 - 10) <= 1u )
  {
    v8 = *v11;
    if ( (_QWORD)v12 == 1 || (v9 = v11 + 3, 24LL * (_QWORD)v12 == 24) )
    {
LABEL_15:
      v10 = *(_QWORD *)a2;
      if ( *(_QWORD *)a2 != -1 )
        v10 &= *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL);
      sub_2A420(a1, v8, v10);
      v7 = (__int64)v11;
      if ( v11 )
        goto LABEL_14;
      return v20 - __readfsqword(0x28u);
    }
    while ( v8 == *v9 )
    {
      v9 += 3;
      if ( &v11[3 * (_QWORD)v12] == v9 )
        goto LABEL_15;
    }
  }
  if ( v11 )
  {
LABEL_14:
    *(_QWORD *)&v12 = 0;
    qfree(v7);
  }
  return v20 - __readfsqword(0x28u);
}
