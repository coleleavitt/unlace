__int64 __fastcall sub_117960(__int64 a1, __int64 *a2, int a3)
{
  const char *v4; // rsi
  __int64 *v5; // rbx
  unsigned int v6; // ebp
  __int64 v8; // rbp
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r14
  __int64 v15; // rbx
  __int64 v16; // rdi
  bool v17; // zf
  unsigned __int8 v18; // al
  unsigned int v19; // [rsp+Ch] [rbp-6Ch] BYREF
  __int128 v20; // [rsp+10h] [rbp-68h] BYREF
  __int128 v21; // [rsp+20h] [rbp-58h]
  __int128 v22; // [rsp+30h] [rbp-48h]
  __int64 v23; // [rsp+40h] [rbp-38h]
  unsigned __int64 v24; // [rsp+48h] [rbp-30h]

  v4 = *(const char **)a1;
  v24 = __readfsqword(0x28u);
  if ( strcmp(v4, "ValueList") )
    return 21;
  v5 = *(__int64 **)(a1 + 8);
  if ( !v5 )
    return 21;
  if ( a3 )
  {
    v6 = sub_1175B0(*v5);
    if ( v6 )
      return v6;
    goto LABEL_8;
  }
  LODWORD(v20) = 0;
  v6 = sub_EC550(*v5, &v20);
  if ( *(_BYTE *)*v5 )
    return 101;
  if ( !v6 )
  {
LABEL_8:
    v23 = 0;
    v20 = 0;
    v21 = 0;
    v22 = 0;
    v8 = *v5;
    sub_C7ED0(*v5);
    v9 = *(unsigned int *)(v8 + 64);
    v6 = sub_116BD0(*v5, v9, (__int64)&v20);
    if ( !v6 )
    {
      v14 = *((_QWORD *)&v20 + 1);
      v15 = v5[1];
      v9 = *(unsigned __int8 *)(*((_QWORD *)&v20 + 1) + 1LL);
      if ( (v9 & 0x80u) != 0LL )
      {
        v18 = sub_CB760((char *)(*((_QWORD *)&v20 + 1) + 1LL), (int *)&v19);
        v9 = v19;
        v16 = v18 + 1LL;
      }
      else
      {
        v19 = *(unsigned __int8 *)(*((_QWORD *)&v20 + 1) + 1LL);
        v16 = 2;
      }
      sub_C6E20((char *)(v14 + v16), v9, v15);
      v17 = (*(_BYTE *)(v15 + 21) & 0x40) == 0;
      *(_BYTE *)(v15 + 22) = *(_BYTE *)(*(_QWORD *)(v15 + 24) + 100LL);
      if ( v17 || !(unsigned int)sub_E0350(v15) )
        *a2 = v15;
      else
        v6 = 7;
    }
    if ( (WORD2(v21) & 0x9000) != 0 || (_DWORD)v22 )
      sub_C9690((__int64)&v20, v9, v10, v11, v12, v13);
  }
  return v6;
}
