__int64 __fastcall sub_3A1AF0(__int64 a1, int *a2, __int64 a3)
{
  _QWORD *v4; // rax
  unsigned int v5; // ebx
  __int64 (__fastcall *v6)(__int64, __int64); // rdx
  int v7; // eax
  void (***v8)(void); // rdi
  bool v9; // zf
  void (*v10)(void); // rdx
  void (__fastcall ***v11)(_QWORD); // rdi
  _DWORD *v13; // [rsp+8h] [rbp-30h] BYREF
  _QWORD v14[5]; // [rsp+10h] [rbp-28h] BYREF

  v14[1] = __readfsqword(0x28u);
  if ( a3 == -1 )
    return 0;
  v4 = (_QWORD *)sub_388540(a1, (unsigned int)(*a2 - 1), a3);
  if ( (unsigned __int64)v4 > 1 && *v4 == a3 )
    return 0;
  (*(void (__fastcall **)(_DWORD **, _QWORD, __int64, __int64, __int64, __int64))(**(_QWORD **)(*(_QWORD *)(a1 + 216)
                                                                                              + 1360LL)
                                                                                + 48LL))(
    &v13,
    *(_QWORD *)(*(_QWORD *)(a1 + 216) + 1360LL),
    a3,
    1,
    3,
    1);
  if ( !v13 )
  {
    return 0;
  }
  else
  {
    v5 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v13 + 8LL))(v13);
    if ( (_BYTE)v5 )
    {
      v6 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v13 + 32LL);
      if ( v6 == sub_39EDD0 )
        (*(void (__fastcall **)(_QWORD *))(*(_QWORD *)v13 + 24LL))(v14);
      else
        ((void (__fastcall *)(_QWORD *))v6)(v14);
      if ( v14[0] )
      {
        v7 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v14[0] + 24LL))(v14[0]);
        if ( v7 <= 0 || *a2 == v7 )
          v5 = 0;
        else
          *a2 = v7;
        v8 = (void (***)(void))v14[0];
        if ( v14[0] )
        {
          v9 = (*(_DWORD *)(v14[0] + 8LL))-- == 1;
          if ( v9 )
          {
            v10 = **v8;
            if ( (char *)v10 == (char *)sub_39EB60 )
              (*v8)[20]();
            else
              v10();
          }
        }
      }
      else
      {
        v5 = 0;
      }
    }
    v11 = (void (__fastcall ***)(_QWORD))v13;
    if ( v13 )
    {
      v9 = v13[2]-- == 1;
      if ( v9 )
        (**v11)(v11);
    }
  }
  return v5;
}

