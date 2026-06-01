unsigned __int64 __fastcall sub_159B40(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, double a6)
{
  bool v9; // zf
  __int64 v12; // rax
  _BYTE *v13; // rdi
  __int64 v14; // rax
  _BYTE *v15; // rdi
  __int64 v16; // rax
  _BYTE *v17; // rdi
  __int64 (__fastcall **v18)(); // [rsp+0h] [rbp-68h] BYREF
  __int64 v19; // [rsp+8h] [rbp-60h]
  __int64 v20; // [rsp+10h] [rbp-58h]
  __int64 v21; // [rsp+18h] [rbp-50h]
  __int64 v22; // [rsp+20h] [rbp-48h]
  __int64 v23; // [rsp+28h] [rbp-40h]
  __int64 v24; // [rsp+30h] [rbp-38h]
  unsigned __int64 v25; // [rsp+38h] [rbp-30h]

  v9 = *(_BYTE *)(a1 + 32) == 4;
  v25 = __readfsqword(0x28u);
  if ( v9 )
  {
    v16 = *(_QWORD *)(a2 + 96);
    v17 = *(_BYTE **)(a1 + 40);
    v19 = 0;
    v22 = 0;
    v18 = &off_4DDCD8;
    v23 = v16;
    v24 = a5;
    v20 = a3;
    v21 = a4;
    if ( (unsigned int)sub_11F760(v17, &v18) )
    {
      if ( !under_debugger )
        sub_383060(0xCADAu, a6);
      goto LABEL_15;
    }
  }
  if ( *(_BYTE *)(a1 + 48) == 4 )
  {
    v14 = *(_QWORD *)(a2 + 96);
    v15 = *(_BYTE **)(a1 + 56);
    v24 = a5;
    v20 = a3;
    v19 = 0;
    v22 = 0;
    v18 = &off_4DDCD8;
    v23 = v14;
    v21 = a4;
    if ( (unsigned int)sub_11F760(v15, &v18) )
    {
      if ( !under_debugger )
        sub_383060(0xCADBu, a6);
      goto LABEL_15;
    }
  }
  if ( !sub_11E8C0((unsigned int *)a1) && *(_BYTE *)(a1 + 64) == 4 )
  {
    v12 = *(_QWORD *)(a2 + 96);
    v13 = *(_BYTE **)(a1 + 72);
    v24 = a5;
    v20 = a3;
    v19 = 0;
    v22 = 0;
    v18 = &off_4DDCD8;
    v23 = v12;
    v21 = a4;
    if ( (unsigned int)sub_11F760(v13, &v18) )
    {
      if ( !under_debugger )
        sub_383060(0xCADCu, a6);
LABEL_15:
      BUG();
    }
  }
  return v25 - __readfsqword(0x28u);
}

