__int64 __fastcall sub_FEBD0(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rdx
  __int64 v3; // rcx
  unsigned int v4; // ebx
  __int64 v5; // r8
  __int64 v6; // rax
  __int64 v7; // rbp
  __int64 v8; // rdx
  bool v9; // zf
  __int64 v11; // rax
  unsigned int v12; // r12d
  __int64 v13; // rax
  unsigned __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 v18; // rax
  unsigned int v19; // edx
  __int64 v20; // r8
  unsigned int v21; // r9d
  signed int v22; // edi
  _QWORD *v23; // rax
  _QWORD *v24; // rcx
  char v25; // [rsp+0h] [rbp-18h]

  if ( dword_2415D4 )
  {
    _mm_mfence();
    return 0;
  }
  v4 = sub_C7420();
  if ( v4 )
    return v4;
  if ( (_BYTE)word_241484 )
  {
    v6 = xmmword_2414F0(2);
    v7 = v6;
    if ( v6 )
      xmmword_241500(v6);
  }
  else
  {
    v7 = 0;
  }
  dword_2415DC = 1;
  if ( dword_2415E0 )
    goto LABEL_7;
  if ( !xmmword_2414A0 )
  {
    a2 = (__int64)off_239F80;
    sub_FE510(4, (const __m128i *)off_239F80, v2, v3, v5, (unsigned int)dword_2415E0, v25);
  }
  if ( (_BYTE)word_241484 )
    v11 = xmmword_2414F0(3);
  else
    v11 = 0;
  *(_QWORD *)&xmmword_2424A0 = v11;
  if ( !qword_2415B8 || dword_2415C0 <= 511 || dword_2415C4 <= 0 )
  {
    qword_2415B8 = 0;
    dword_2415C0 = 0;
  }
  v12 = (*(&xmmword_2414C0 + 1))(*((_QWORD *)&xmmword_2414D0 + 1));
  if ( !v12 )
  {
LABEL_7:
    dword_2415E0 = 1;
    if ( !qword_2415F0 )
    {
      if ( (_BYTE)word_241484 )
      {
        v13 = xmmword_2414F0(1);
        qword_2415F0 = v13;
        if ( (_BYTE)word_241484 )
        {
          if ( !v13 )
          {
            if ( v7 )
              xmmword_241510(v7, a2, v2);
            return 7;
          }
        }
      }
    }
    ++dword_2415E8;
    if ( v7 )
      xmmword_241510(v7, a2, v2);
    if ( qword_2415F0 )
    {
      xmmword_241500(qword_2415F0);
      if ( dword_2415D4 )
      {
LABEL_13:
        if ( qword_2415F0 )
          xmmword_241510(qword_2415F0, a2, v2);
        goto LABEL_15;
      }
    }
    else if ( dword_2415D4 )
    {
LABEL_15:
      if ( v7 )
      {
        xmmword_241500(v7);
        v9 = dword_2415E8-- == 1;
        if ( dword_2415E8 < 0 || v9 )
        {
          if ( qword_2415F0 )
          {
            ((void (*)(void))*(&xmmword_2414F0 + 1))();
            qword_2415F0 = 0;
          }
        }
        xmmword_241510(v7, a2, v8);
      }
      else
      {
        v9 = dword_2415E8-- == 1;
        if ( (dword_2415E8 < 0 || v9) && qword_2415F0 )
        {
          ((void (*)(void))*(&xmmword_2414F0 + 1))();
          qword_2415F0 = 0;
        }
      }
      return v4;
    }
    a2 = (unsigned int)dword_2415D8;
    if ( !dword_2415D8 )
    {
      dword_2415D8 = 1;
      memset(qword_2425A0, 0, sizeof(qword_2425A0));
      sub_C7560((__int64)&unk_23F6A0, 5);
      sub_C7560((__int64)&unk_23F260, 15);
      sub_C7560((__int64)&unk_23EFC0, 9);
      sub_C7560((__int64)&unk_23EA60, 19);
      a2 = 69;
      sub_C7560((__int64)&unk_23F820, 69);
      if ( dword_2415E4 )
        goto LABEL_43;
      if ( !(_QWORD)xmmword_241538 )
      {
        a2 = (__int64)&xmmword_239EC0;
        sub_FE510(18, &xmmword_239EC0, v14, (unsigned int)dword_2415E4, v15, v16, v25);
      }
      v4 = ((__int64 (__fastcall *)(_QWORD))xmmword_241538)(*((_QWORD *)&xmmword_241528 + 1));
      if ( !v4 )
      {
LABEL_43:
        dword_2415E4 = 1;
        if ( (unsigned int)sub_FEBD0() || (v17 = sub_D1E10(10, a2)) == 0 )
        {
          v4 = 7;
        }
        else
        {
          sub_C91C0(v17, a2);
          v4 = sub_FF4D0();
          if ( !v4 )
          {
            v4 = 1;
            v18 = sub_FF150(nullptr);
            if ( v18 )
            {
              v19 = *(_DWORD *)(v18 + 4);
              qword_241080 = v18;
              if ( v19 < 0x18 )
                v19 = 24;
              dword_241064 = v19;
              v4 = sub_FEBD0();
              if ( !v4 )
              {
                a2 = 0;
                v4 = sub_D6070((__int64)&unk_241060, 0);
                if ( !v4 )
                {
                  v2 = (unsigned int)dword_2421F0;
                  if ( dword_2421F0 )
                  {
                    v20 = qword_2415B8;
                    if ( qword_2415B8 && dword_2415C4 )
                    {
                      LODWORD(qword_242228) = dword_2415C4;
                      v21 = dword_2415C4 - 1;
                      HIDWORD(qword_2421FC) = dword_2415C4;
                      v22 = dword_2415C0 & 0xFFFFFFF8;
                      LODWORD(qword_2421FC) = dword_2415C0 & 0xFFFFFFF8;
                      if ( dword_2415C4 <= 90 )
                      {
                        qword_242208 = qword_2415B8;
                        HIDWORD(qword_242228) = 0;
                        dword_242204 = dword_2415C4 / 10 + 1;
                      }
                      else
                      {
                        dword_242204 = 10;
                        qword_242208 = qword_2415B8;
                        HIDWORD(qword_242228) = 0;
                      }
                      LODWORD(v2) = dword_2415C4 - 1;
                      v23 = (_QWORD *)qword_2415B8;
                      v24 = nullptr;
                      while ( 1 )
                      {
                        v2 = (unsigned int)(v2 - 1);
                        *v23 = v24;
                        a2 = (__int64)v23 + v22;
                        qword_242220 = (__int64)v23;
                        v24 = v23;
                        if ( (_DWORD)v2 == -1 )
                          break;
                        v23 = (_QWORD *)((char *)v23 + v22);
                      }
                      v20 += (v21 + 1LL) * v22;
                    }
                    else
                    {
                      qword_2421FC = 0;
                      dword_242204 = 1;
                      qword_242208 = qword_2415B8;
                      qword_242220 = 0;
                      qword_242228 = 0;
                    }
                    qword_242210 = v20;
                  }
                  _mm_mfence();
                  dword_2415D4 = 1;
                }
              }
            }
          }
        }
      }
      dword_2415D8 = 0;
    }
    goto LABEL_13;
  }
  xmmword_2424A0 = 0;
  xmmword_2424B0 = 0;
  if ( v7 )
    xmmword_241510(v7, a2, v2);
  return v12;
}
