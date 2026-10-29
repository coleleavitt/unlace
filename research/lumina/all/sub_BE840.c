__int64 __fastcall sub_BE840(__int64 a1, __int64 a2, __int64 a3)
{
  void *v3; // r13
  __int64 v5; // r15
  unsigned int v6; // ebx
  _QWORD *v7; // rbp
  void (__fastcall *v9)(_QWORD *); // rdx
  void (__fastcall *v10)(_QWORD *); // rax
  void *v12[9]; // [rsp+0h] [rbp-48h] BYREF

  v3 = qword_241DF8;
  v12[1] = (void *)__readfsqword(0x28u);
  sub_19A520(qword_241DF8);
  if ( *(_QWORD *)a2 && (v5 = *(_QWORD *)(*(_QWORD *)a2 + 24LL), unk_241E58(v12, a1), v12[0]) )
  {
    v6 = sub_2F9D0(a3, (__int64)v12, (__int64)"I", v5);
    if ( (_BYTE)v6 )
      v6 = unk_241E68(v12, 0);
    v7 = v12[0];
    if ( v12[0] )
    {
      if ( (*((_DWORD *)v12[0] + 2))-- == 1 )
      {
        v9 = *(void (__fastcall **)(_QWORD *))*v7;
        if ( v9 == sub_BCB00 )
        {
          v10 = *(void (__fastcall **)(_QWORD *))(*v7 + 16LL);
          if ( v10 == sub_BCAE0 )
          {
            sub_BC950(v7);
            operator delete(v7, 0x458u);
          }
          else
          {
            v10(v7);
          }
        }
        else
        {
          v9(v7);
        }
      }
    }
  }
  else
  {
    v6 = 0;
  }
  sub_19A570(v3);
  return v6;
}
