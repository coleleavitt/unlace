unsigned __int64 __fastcall sub_2A500(__int64 a1, __int64 a2)
{
  unsigned __int64 *v3; // rax
  __int64 v5; // rsi
  __int64 *v6; // rax
  __int64 v7; // rdx
  __int64 *v8; // [rsp+0h] [rbp-1A8h] BYREF
  __int128 v9; // [rsp+8h] [rbp-1A0h]
  char v10; // [rsp+18h] [rbp-190h]
  __int128 v11; // [rsp+20h] [rbp-188h] BYREF
  __int64 v12; // [rsp+30h] [rbp-178h]
  __int64 v13; // [rsp+38h] [rbp-170h]
  __int64 v14; // [rsp+40h] [rbp-168h]
  char v15; // [rsp+48h] [rbp-160h] BYREF
  _BYTE v16[280]; // [rsp+70h] [rbp-138h] BYREF
  unsigned __int64 v17; // [rsp+188h] [rbp-20h] BYREF

  v17 = __readfsqword(0x28u);
  if ( *(_WORD *)(a2 + 16) != 30 )
    return v17 - __readfsqword(0x28u);
  v3 = (unsigned __int64 *)&v15;
  v11 = -1;
  v12 = -1;
  v13 = 0;
  v14 = 0;
  do
  {
    *(_WORD *)v3 = 0;
    v3 += 5;
    *((_WORD *)v3 - 19) = 0;
    *((_WORD *)v3 - 18) = 0;
    *((_DWORD *)v3 - 2) = 0;
    *((_WORD *)v3 - 17) = 0;
    *((_OWORD *)v3 - 2) = 0;
    *(v3 - 2) = 0;
  }
  while ( v3 != &v17 );
  if ( (int)decode_insn() <= 0 )
    return v17 - __readfsqword(0x28u);
  v8 = nullptr;
  v10 = 0;
  v9 = 0;
  if ( (unsigned __int8)sub_82140(a1, &v8, v16, &v11, 1, 0) && (unsigned __int8)(v10 - 10) <= 1u )
  {
    v5 = *v8;
    if ( (_QWORD)v9 == 1 || (v6 = v8 + 3, 24LL * (_QWORD)v9 == 24) )
    {
LABEL_15:
      v7 = *(_QWORD *)a2;
      if ( *(_QWORD *)a2 != -1 )
        v7 &= *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL);
      sub_2A420(a1, v5, v7);
      if ( v8 )
        goto LABEL_14;
      return v17 - __readfsqword(0x28u);
    }
    while ( v5 == *v6 )
    {
      v6 += 3;
      if ( &v8[3 * (_QWORD)v9] == v6 )
        goto LABEL_15;
    }
  }
  if ( v8 )
  {
LABEL_14:
    *(_QWORD *)&v9 = 0;
    qfree();
  }
  return v17 - __readfsqword(0x28u);
}

