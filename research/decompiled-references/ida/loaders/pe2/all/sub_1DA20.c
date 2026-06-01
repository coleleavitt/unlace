unsigned __int64 __fastcall sub_1DA20(unsigned int a1)
{
  unsigned int v1; // r13d
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r15
  int v7; // eax
  __int64 v8; // rbp
  int v9; // eax
  unsigned int v11; // [rsp+0h] [rbp-68h] BYREF
  int v12; // [rsp+4h] [rbp-64h] BYREF
  __int64 v13; // [rsp+8h] [rbp-60h] BYREF
  __int64 v14; // [rsp+10h] [rbp-58h] BYREF
  __int64 v15; // [rsp+1Ch] [rbp-4Ch] BYREF
  _BYTE v16[4]; // [rsp+24h] [rbp-44h] BYREF
  unsigned __int64 v17; // [rsp+28h] [rbp-40h]

  v17 = __readfsqword(0x28u);
  v11 = 0;
  v13 = 0;
  if ( !(*(unsigned int (__fastcall **)(__int64, __int64 *, _QWORD, _QWORD, _BYTE *, __int64, unsigned int *))(*(_QWORD *)qword_47A20 + 56LL))(
          qword_47A20,
          &v13,
          a1,
          0,
          v16,
          1,
          &v11)
    && v11 )
  {
    v1 = 0;
    (*(void (__fastcall **)(__int64, __int64, unsigned int *))(*(_QWORD *)qword_47A20 + 24LL))(qword_47A20, v13, &v11);
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)qword_47A20 + 32LL))(qword_47A20, v13, 0);
    v2 = qcalloc();
    v6 = v2;
    if ( !v2 )
      sub_DB80((__int64)"No memory (requested memory for %zu tokens)", v11, v3, v4, v5, v11, v11);
    v7 = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD, _QWORD, __int64, _QWORD, unsigned int *))(*(_QWORD *)qword_47A20 + 56LL))(
           qword_47A20,
           &v13,
           a1,
           0,
           v2,
           v11,
           &v11);
    if ( !(unsigned __int8)sub_1D810("EnumCustomAttributes(&enr, token, 0, toks, count, &count)", v7) && v11 )
    {
      do
      {
        v8 = *(unsigned int *)(v6 + 4LL * (int)v1);
        v15 = 0;
        if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)qword_47A20 + 48LL))(
               qword_47A20,
               (unsigned int)v8) )
        {
          v12 = 0;
          v14 = 0;
          v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *, char *, __int64 *, int *))(*(_QWORD *)qword_47A20
                                                                                               + 176LL))(
                 qword_47A20,
                 (unsigned int)v8,
                 &v15,
                 (char *)&v15 + 4,
                 &v14,
                 &v12);
          if ( !(unsigned __int8)sub_1D810("GetCustomAttrubuteProps", v9) )
          {
            sub_F0A0(v8, &v15, 8, 97);
            sub_F110();
          }
        }
        else
        {
          sub_A7E0((__int64)"%s: invalid token.", "display_custom_attr");
        }
        ++v1;
      }
      while ( v1 < v11 );
      sub_F110();
    }
    qfree();
  }
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)qword_47A20 + 40LL))(qword_47A20, v13);
  return v17 - __readfsqword(0x28u);
}

