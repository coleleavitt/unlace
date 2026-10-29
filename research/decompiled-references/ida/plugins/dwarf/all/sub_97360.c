bool __fastcall sub_97360(_QWORD *a1, __int64 *a2)
{
  __int64 v3; // rax
  _DWORD *v4; // rbp
  int v5; // r14d
  __int64 v6; // rax
  __int64 v7; // rdi
  void (__fastcall *v9)(_QWORD *); // rdx
  void (__fastcall *v10)(_QWORD *); // rax
  _QWORD *v11; // r15
  __int64 v12; // r13
  void *v13; // rdi
  __int64 v14; // r13
  _QWORD *v15; // r15
  __int64 v16; // rdi
  __int64 v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rdi
  const char *v20; // rax
  char *v21; // r8
  __int16 v22; // [rsp+Ah] [rbp-5Eh] BYREF
  int v23; // [rsp+Ch] [rbp-5Ch] BYREF
  __int64 v24[11]; // [rsp+10h] [rbp-58h] BYREF

  v3 = a1[31];
  v24[3] = __readfsqword(0x28u);
  v23 = 0;
  if ( !v3 )
  {
    v3 = sub_87C20(*(_QWORD **)(*a1 + 16LL), *(_QWORD *)(*a1 + 24LL));
    a1[31] = v3;
  }
  v4 = *(_DWORD **)(v3 + 216);
  if ( v4 )
  {
    v5 = v4[31];
    if ( !v4[2] )
    {
      v9 = **(void (__fastcall ***)(_QWORD *))v4;
      if ( v9 == sub_15E30 )
      {
        v10 = *(void (__fastcall **)(_QWORD *))(*(_QWORD *)v4 + 16LL);
        if ( v10 == sub_15D70 )
        {
          v11 = *((_QWORD **)v4 + 16);
          *(_QWORD *)v4 = &off_C71D8;
          if ( v11 )
          {
            v12 = v11[2];
            while ( v12 )
            {
              sub_80300(*(_QWORD **)(v12 + 24));
              v13 = (void *)v12;
              v12 = *(_QWORD *)(v12 + 16);
              operator delete(v13, 0x30u);
            }
            operator delete(v11, 0x30u);
          }
          v14 = *((_QWORD *)v4 + 19);
          while ( v14 )
          {
            v15 = (_QWORD *)v14;
            sub_80A30(*(_QWORD **)(v14 + 24));
            v16 = *(_QWORD *)(v14 + 32);
            v14 = *(_QWORD *)(v14 + 16);
            if ( v16 )
            {
              v15[5] = 0;
              qfree(v16);
            }
            operator delete(v15, 0x48u);
          }
          v17 = *((_QWORD *)v4 + 12);
          if ( v17 )
          {
            *((_QWORD *)v4 + 13) = 0;
            qfree(v17);
          }
          operator delete(v4, 0xC0u);
          if ( v5 != 7 )
            goto LABEL_6;
          goto LABEL_21;
        }
        v10(v4);
      }
      else
      {
        v9(v4);
      }
    }
  }
  else
  {
    v5 = 5;
  }
  if ( v5 != 7 )
  {
LABEL_6:
    v6 = a1[32];
    v7 = *a2;
    v24[0] = 0;
    if ( (*(unsigned int (__fastcall **)(__int64, int *, __int64 *))(v6 + 256))(v7, &v23, v24) )
    {
      v21 = sub_81C40((__int64)a1);
      sub_95A30(
        v24[0],
        (__int64)"die.cpp",
        1124,
        (__int64)"Error retrieving attribute value of type flag for DIE %s",
        v21);
    }
    return v23 != 0;
  }
LABEL_21:
  v18 = a1[32];
  v19 = *a2;
  v24[0] = 0;
  if ( (*(unsigned int (__fastcall **)(__int64, __int16 *, __int64 *))(v18 + 200))(v19, &v22, v24) )
  {
    v20 = (const char *)(*(__int64 (__fastcall **)(__int64))(a1[32] + 464LL))(v24[0]);
    sub_1D740((__int64)"ERROR: %s\n", v20);
  }
  if ( v22 == 12 )
    goto LABEL_6;
  v24[0] = 0;
  if ( !(unsigned __int8)sub_96D10((__int64)a1, (__int64)v24, a2) )
    return v23 != 0;
  return v24[0] != 0;
}

