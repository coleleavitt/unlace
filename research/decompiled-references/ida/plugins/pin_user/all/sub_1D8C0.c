__int64 __fastcall sub_1D8C0(__int64 a1, __int64 *a2)
{
  unsigned int v2; // eax
  unsigned int v3; // r13d
  __int64 v4; // r9
  __int64 v5; // r12
  size_t v6; // r8
  _BYTE *v8; // rbp
  char v9; // al
  __int64 v10; // r9
  __int64 v11; // rdx
  const void *v12; // r9
  void *v13; // rdi
  _BYTE *v14; // rax
  __int64 v15; // rax
  __int64 v16; // [rsp+20h] [rbp-68h]
  __int64 v17; // [rsp+20h] [rbp-68h]

  v2 = netnode_inited();
  if ( (_BYTE)v2 )
  {
    v3 = v2;
    while ( 1 )
    {
      if ( (unsigned __int64)xmmword_3C438 > 1 )
      {
        v4 = xmmword_3C418;
        if ( (unsigned __int64)xmmword_3C418 > 1 )
          break;
      }
      if ( (dword_3A5A0 & 1) == 0 )
      {
        v4 = xmmword_3C418;
        if ( (unsigned __int64)xmmword_3C418 <= 1 )
          goto LABEL_10;
        break;
      }
      if ( !(unsigned int)sub_CF90(
                            1u,
                            (__int64)"HIDECANCEL\n"
                                     "Sorry, PIN has not been configured yet.\n"
                                     "Do you want to configure it now?\n"
                                     "\n"
                                     "NOTE: You can configure it later in\n"
                                     "  Debugger->Debugger Options->Specific options\n"
                                     "before running the tracer.")
        || sub_D7F0(nullptr, 0, 0, nullptr)
        || batch )
      {
        return 0;
      }
    }
    v8 = dest;
    v16 = v4;
    v9 = v8[strlen((const char *)dest) - 1];
    if ( v9 != 47 && v9 != 92 )
    {
      v10 = v16;
      v11 = v16 + 1;
      if ( *((_QWORD *)&xmmword_3C418 + 1) < (unsigned __int64)(v16 + 1) )
      {
        v14 = (_BYTE *)qvector_reserve();
        v10 = v16;
        v11 = v16 + 1;
        v8 = v14;
        dest = v14;
      }
      *(_QWORD *)&xmmword_3C418 = v11;
      v8[v10] = 0;
      *((_BYTE *)dest + v16 - 1) = 47;
    }
LABEL_10:
    if ( unk_3C3C8 )
      qsnprintf();
    if ( a2 != &qword_3C3F0 )
    {
      v5 = xmmword_3C3F8;
      if ( (_QWORD)xmmword_3C3F8 && (v6 = xmmword_3C3F8 - 1, (_QWORD)xmmword_3C3F8 != 1) )
      {
        v12 = (const void *)qword_3C3F0;
        v13 = (void *)*a2;
        if ( a2[2] < (unsigned __int64)xmmword_3C3F8 )
        {
          v17 = qword_3C3F0;
          v15 = qvector_reserve();
          v12 = (const void *)v17;
          v6 = v5 - 1;
          *a2 = v15;
          v13 = (void *)v15;
        }
        a2[1] = v5;
        memmove(v13, v12, v6);
        *(_BYTE *)(*a2 + v5 - 1) = 0;
      }
      else
      {
        a2[1] = 0;
      }
    }
    sub_1D800(a2);
  }
  else
  {
    return 0;
  }
  return v3;
}

