__int64 __fastcall sub_383F0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 result; // rax
  char **v5; // r15
  void (__fastcall ***v6)(_QWORD); // rdi
  bool v7; // zf
  void (__fastcall ***v8)(_QWORD); // rdi
  void (__fastcall ***v9)(_QWORD); // rdi
  void (__fastcall ***v10)(_QWORD); // rdi
  __int64 v11; // [rsp+10h] [rbp-A8h] BYREF
  __int64 v12; // [rsp+18h] [rbp-A0h] BYREF
  __int64 v13; // [rsp+20h] [rbp-98h] BYREF
  __int64 v14; // [rsp+28h] [rbp-90h] BYREF
  void *v15; // [rsp+30h] [rbp-88h] BYREF
  __int128 v16; // [rsp+38h] [rbp-80h]
  int v17; // [rsp+48h] [rbp-70h]
  void *ptr; // [rsp+50h] [rbp-68h] BYREF
  __int128 v19; // [rsp+58h] [rbp-60h]
  int v20; // [rsp+68h] [rbp-50h]
  unsigned __int64 v21; // [rsp+78h] [rbp-40h]

  v21 = __readfsqword(0x28u);
  result = a3;
  if ( !a3 )
  {
    v15 = nullptr;
    v17 = -1;
    v16 = 0;
    unk_241E88(&v11, a2, &v15);
    sub_32E30(a2, a1, (const char **)off_23E7A0, 20, 0);
    unk_241E58(&v12, a2);
    if ( v12 )
    {
      v5 = off_236380;
      do
      {
        if ( !(unsigned __int8)sub_2F9D0((__int64)&v15, (__int64)&v12, (__int64)"s", *v5) )
        {
          if ( !unk_2439A0 )
            sub_198E10(2750);
          goto LABEL_54;
        }
        if ( !(unsigned __int8)unk_241E68(&v12, &v15) )
        {
          if ( !unk_2439A0 )
            sub_198E10(2751);
          goto LABEL_54;
        }
        ++v5;
      }
      while ( v5 != (char **)&off_2363A0 );
      v6 = (void (__fastcall ***)(_QWORD))v12;
      if ( v12 )
      {
        v7 = (*(_DWORD *)(v12 + 8))-- == 1;
        if ( v7 )
          (**v6)(v6);
      }
      sub_33C00(a2, a1);
      if ( (unsigned __int8)unk_241E90(&v11, &v15) )
      {
        v8 = (void (__fastcall ***)(_QWORD))v11;
        if ( v11 )
        {
          v7 = (*(_DWORD *)(v11 + 8))-- == 1;
          if ( v7 )
            (**v8)(v8);
        }
        if ( v15 )
        {
          *(_QWORD *)&v16 = 0;
          j__free(v15);
        }
LABEL_16:
        ptr = nullptr;
        v20 = -1;
        v19 = 0;
        unk_241E88(&v13, a2, &ptr);
        if ( v13 )
        {
          if ( *(_DWORD *)(a1 + 260) )
          {
            unk_241E58(&v14, a2);
            if ( v14 )
            {
              if ( (unsigned __int8)sub_2F9D0(
                                      (__int64)&ptr,
                                      (__int64)&v14,
                                      (__int64)"iy",
                                      2,
                                      *(unsigned int *)(a1 + 260)) )
              {
                if ( (unsigned __int8)unk_241E68(&v14, &ptr) )
                {
                  if ( (unsigned __int8)unk_241E90(&v13, &ptr) )
                  {
                    v9 = (void (__fastcall ***)(_QWORD))v14;
                    if ( v14 )
                    {
                      v7 = (*(_DWORD *)(v14 + 8))-- == 1;
                      if ( v7 )
                        (**v9)(v9);
                    }
                    v10 = (void (__fastcall ***)(_QWORD))v13;
                    if ( v13 )
                    {
                      v7 = (*(_DWORD *)(v13 + 8))-- == 1;
                      if ( v7 )
                        (**v10)(v10);
                    }
                    if ( ptr )
                    {
                      *(_QWORD *)&v19 = 0;
                      j__free(ptr);
                    }
                    return 2;
                  }
                  if ( !unk_2439A0 )
                    sub_198E10(3232);
                }
                else if ( !unk_2439A0 )
                {
                  sub_198E10(3231);
                }
              }
              else if ( !unk_2439A0 )
              {
                sub_198E10(3230);
              }
            }
            else if ( !unk_2439A0 )
            {
              sub_198E10(3229);
            }
          }
          else if ( !unk_2439A0 )
          {
            sub_198E10(3228);
          }
        }
        else if ( !unk_2439A0 )
        {
          sub_198E10(3227);
        }
      }
      else if ( !unk_2439A0 )
      {
        sub_198E10(2745);
      }
    }
    else if ( !unk_2439A0 )
    {
      sub_198E10(2749);
    }
LABEL_54:
    BUG();
  }
  if ( a3 == 1 )
    goto LABEL_16;
  return result;
}
