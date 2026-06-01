__int64 __fastcall sub_18640(__int64 a1, char *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v6; // r12d
  unsigned int v7; // ebp
  __int64 v8; // rax
  unsigned int v10; // r14d
  unsigned int i; // ebx
  unsigned int v12; // ecx
  unsigned int *v13; // rax
  unsigned int *v14; // rbx
  __int64 v15; // rax
  __int64 v16; // r8
  bool v17; // cf
  char *v18; // rax
  char *v19; // r13
  char *v20; // rax
  char *v21; // rsi
  __int64 v22; // r8
  size_t v23; // r9
  unsigned int v24; // eax
  char *v25; // rbx
  __int64 max_strlit_length; // rax
  __int64 v27; // rdi
  __int64 v28; // rdx
  unsigned __int64 v29; // rax
  __int64 v30; // rbx
  __int64 v32; // [rsp+0h] [rbp-A8h]
  char **p_s; // [rsp+8h] [rbp-A0h]
  __int64 v34; // [rsp+10h] [rbp-98h] BYREF
  char *s; // [rsp+18h] [rbp-90h] BYREF
  _BYTE v36[72]; // [rsp+20h] [rbp-88h] BYREF
  unsigned __int64 v37; // [rsp+68h] [rbp-40h]

  v6 = -1;
  v7 = 0;
  v8 = *(_QWORD *)(a1 + 40);
  v37 = __readfsqword(0x28u);
  LODWORD(v34) = 0;
  v10 = *(_DWORD *)(v8 + 56);
  if ( v10 )
  {
    for ( i = 0; i < v10; LODWORD(v34) = i )
    {
      if ( __ROR4__(989560465 * i, 4) <= 0x68DB8u )
      {
        v12 = i + 10000;
        a2 = "strings";
        if ( i + 10000 > v10 )
          v12 = v10;
        sub_7210((__int64)"Processing %s %5u..%-5u from %5u%s", "strings", i + 1, v12, v10, "");
      }
      if ( __ROR4__(652835029 * i, 3) <= 0x418937u
        && (unsigned __int8)callui(27, a2, &callui, a4, a5, a6, v32, p_s, v34, s) )
      {
        sub_7600();
      }
      v13 = (unsigned int *)sub_1BF40(a1, (unsigned int)v34);
      v14 = v13;
      if ( v13
        && (v15 = *v13, v16 = *(_QWORD *)(a1 + 32), v17 = __CFADD__(v16, v15), v18 = (char *)(v16 + v15), s = v18, !v17)
        && (unsigned __int64)*(unsigned int *)(*(_QWORD *)(a1 + 40) + 32LL) + v16 >= (unsigned __int64)(v18 + 1)
        && (p_s = &s, (unsigned __int8)unpack_xleb128((char *)&v34 + 4, 32, 0, &s))
        && (v19 = s, (v20 = &v19[strlen(s)]) != nullptr)
        && (v21 = *(char **)(a1 + 32), v20 >= v21)
        && (v22 = *(_QWORD *)(a1 + 40), v23 = *(unsigned int *)(v22 + 108), v20 - v21 >= v23)
        && v20 - v21 < (unsigned __int64)(unsigned int)(*(_DWORD *)(v22 + 104) + v23)
        && (v24 = (_DWORD)v20 + 1 - (_DWORD)v21, (_DWORD)v19 != (_DWORD)v21) )
      {
        if ( v6 > *v14 )
          v6 = *v14;
        if ( v7 < v24 )
          v7 = v24;
        v25 = (char *)(*(_QWORD *)(a1 + 152) + (unsigned int)((_DWORD)v19 - (_DWORD)v21));
        max_strlit_length = get_max_strlit_length(v25, 0, 6);
        create_strlit(v25, max_strlit_length, 0);
        qsnprintf(v36, 64, "String #%d (0x%x)", v34, v34);
        append_cmt(v25, v36, 0);
        v27 = *(_QWORD *)(a1 + 16);
        s = v25;
        netnode_supset(v27, (unsigned int)v34, &s, 8, 595);
        a2 = v25;
        netnode_supset(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 40LL), v25, &v34, 4, 339);
      }
      else
      {
        a2 = (char *)(unsigned int)v34;
        sub_5860((__int64)"dex: failed to read string id %u\n", v34);
      }
      i = v34 + 1;
    }
  }
  v28 = *(_QWORD *)(a1 + 8);
  v29 = (unsigned int)(*(_DWORD *)a1 - 1);
  if ( v29 >= *(_QWORD *)(v28 + 56) )
  {
    sub_59F0();
    return sub_18980();
  }
  else
  {
    v30 = netnode_altval(*(_QWORD *)(*(_QWORD *)(v28 + 48) + 8 * v29), 0, 595);
    if ( (unsigned __int8)get_byte(v30) )
    {
      if ( !v7 )
        return v37 - __readfsqword(0x28u);
    }
    else
    {
      set_name(v30, "empty_str", 1313);
      if ( !v7 )
        return v37 - __readfsqword(0x28u);
    }
    return sub_18450(a1, v6, v7 - v6, "STRINGS");
  }
}
