char __fastcall sub_1547A0(__int64 a1, unsigned __int64 *a2, int a3, int a4, int a5, double a6)
{
  _DWORD *v8; // r14
  _DWORD *v9; // r15
  int v11; // eax
  char result; // al
  _DWORD *v13; // rax
  __int64 v14; // rsi
  unsigned __int8 *v15; // r13
  __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rcx
  char v19; // al
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  _BYTE *v23; // rax
  __int64 v24; // rcx
  unsigned __int8 *v25; // [rsp+0h] [rbp-E8h]
  char v26; // [rsp+0h] [rbp-E8h]
  unsigned __int8 *v27; // [rsp+10h] [rbp-D8h]
  unsigned __int8 *v28; // [rsp+10h] [rbp-D8h]
  __int64 v29; // [rsp+10h] [rbp-D8h]
  unsigned __int8 *v30; // [rsp+18h] [rbp-D0h]
  __int64 v31; // [rsp+20h] [rbp-C8h]
  __int64 v32; // [rsp+28h] [rbp-C0h]
  char v33[16]; // [rsp+30h] [rbp-B8h] BYREF
  char v34[16]; // [rsp+40h] [rbp-A8h] BYREF
  _DWORD v35[8]; // [rsp+50h] [rbp-98h] BYREF
  _QWORD v36[2]; // [rsp+70h] [rbp-78h] BYREF
  _QWORD v37[2]; // [rsp+80h] [rbp-68h] BYREF
  _QWORD v38[11]; // [rsp+90h] [rbp-58h] BYREF

  v8 = *(_DWORD **)(a1 + 40);
  v9 = *(_DWORD **)(a1 + 56);
  v38[3] = __readfsqword(0x28u);
  v11 = *v9;
  if ( *v8 == a3 && a4 == v11 )
  {
    v13 = v9;
    v9 = v8;
    v8 = v13;
  }
  else
  {
    result = *v8 == a4 && a3 == v11;
    if ( !result )
      return result;
  }
  if ( ((v9[1] & 0x10) != 0) == ((v8[1] & 0x10) != 0) )
  {
    if ( (unsigned int)(a4 - 32) > 1 )
    {
      if ( !under_debugger )
        sub_383060(0xC53Bu, a6);
      BUG();
    }
    v14 = *((_QWORD *)v9 + 3);
    v36[1] = 0;
    v36[0] = 0xFFFFFFFF00000000LL;
    v37[0] = 0xFFFFFFFF00000000LL;
    v38[0] = 0xFFFFFFFF00000000LL;
    v37[1] = 0;
    v38[1] = 0;
    sub_330970((__int64)v35, v14);
    if ( a3 == 29 )
    {
      v35[0] = 40;
      sub_125180((unsigned __int8 *)v36, (unsigned __int8 *)v9 + 32);
      sub_120A10((__int64)v37, a2, 0, v9[9], *((_QWORD *)v9 + 3), 0);
      HIDWORD(v38[0]) = 1;
      v20 = v9[1];
      v9 = v35;
      v35[1] = v20;
    }
    v25 = (unsigned __int8 *)(v9 + 8);
    if ( sub_125B60((unsigned __int8 *)v9 + 32, (__int64)(v8 + 8), 0, a6) )
    {
      v15 = (unsigned __int8 *)(v9 + 12);
      if ( sub_125B60((unsigned __int8 *)v9 + 48, (__int64)(v8 + 12), 0, a6) )
        goto LABEL_24;
    }
    else
    {
      v15 = (unsigned __int8 *)(v9 + 12);
    }
    v30 = v15;
    if ( sub_125B60(v15, (__int64)(v8 + 8), 0, a6) && sub_125B60(v25, (__int64)(v8 + 12), 0, a6) )
      goto LABEL_24;
    if ( *((_BYTE *)v9 + 48) == 2 && *((_BYTE *)v8 + 48) == 2 )
    {
      v31 = sub_32ABC0(*(_QWORD *)(*((_QWORD *)v9 + 7) + 16LL), v9[13], 0);
      v28 = sub_14DA80(v33, v25);
      v32 = sub_32ABC0(*(_QWORD *)(*((_QWORD *)v8 + 7) + 16LL), v8[13], 0);
      v23 = sub_14DA80(v34, (_BYTE *)v8 + 32);
      if ( sub_125B60(v28, (__int64)v23, 0, a6) )
      {
        if ( sub_32ABC0(*(_QWORD *)v34 + v31 - *(_QWORD *)v33, v8[13], 0) == v32 )
          goto LABEL_24;
      }
    }
    if ( *((_BYTE *)v9 + 32) == 4
      && **((_DWORD **)v9 + 5) == 13
      && (v29 = *((_QWORD *)v9 + 5), (unsigned __int8)sub_11FD80((char *)v15, (__int64 *)v34, 0))
      && (v24 = v29, !*(_QWORD *)v34) )
    {
      v27 = (unsigned __int8 *)(v29 + 32);
      v30 = (unsigned __int8 *)(v24 + 48);
    }
    else
    {
      v27 = (unsigned __int8 *)(v9 + 8);
    }
    v16 = (__int64)(v8 + 12);
    if ( sub_125B60(v27, (__int64)(v8 + 8), 0, a6) )
    {
      if ( sub_125B60(v30, v16, 0, a6) )
        goto LABEL_24;
      v16 = (__int64)(v8 + 12);
    }
    if ( !sub_125B60(v27, v16, 0, a6) || !sub_125B60(v30, (__int64)(v8 + 8), 0, a6) )
    {
      v19 = 0;
LABEL_21:
      v26 = v19;
      sub_11CDA0((__int64)v38);
      sub_11CDA0((__int64)v37);
      sub_11CDA0((__int64)v36);
      return v26;
    }
LABEL_24:
    if ( a5 )
    {
      *(_DWORD *)a1 = a5;
      *(_DWORD *)(a1 + 4) = v9[1];
      sub_123A40((__int64)v33, v15, v17, v18);
      sub_123A40((__int64)v34, v25, v21, v22);
      sub_11CA10((char *)(a1 + 48), v33);
      sub_11CA10((char *)(a1 + 32), v34);
      sub_11CDA0((__int64)v34);
      sub_11CDA0((__int64)v33);
    }
    v19 = 1;
    goto LABEL_21;
  }
  return 0;
}

