__int64 __fastcall sub_390C0(__int64 a1, _BYTE *a2, __int64 a3)
{
  _BYTE *v4; // r14
  _BYTE *v5; // r13
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // r12
  __int64 v10; // rax
  const char *v11; // rax

  if ( byte_6ACE9 )
  {
    if ( a3 )
    {
      v4 = a2;
      v5 = &a2[a3];
      while ( 1 )
      {
        v6 = (unsigned int)(char)*v4;
        if ( *v4 == 92 )
          break;
        if ( (unsigned __int8)(*v4 - 32) <= 0x5Eu )
        {
          sub_38E60(a1, 1, (__int64)"%c", v6);
LABEL_5:
          if ( v5 == ++v4 )
            goto LABEL_9;
        }
        else
        {
          ++v4;
          sub_38E60(a1, 1, (__int64)"\\x%02X", (unsigned __int8)v6);
          if ( v5 == v4 )
            goto LABEL_9;
        }
      }
      sub_38E60(a1, 1, (__int64)"\\\\");
      goto LABEL_5;
    }
LABEL_9:
    if ( *(_QWORD *)(a1 + 224) > 1u )
    {
      sub_DBE0((__int64)"%s\n", *(const char **)(a1 + 216));
      if ( *(_QWORD *)(a1 + 240) )
      {
        sub_38010();
        qflush();
      }
      *(_QWORD *)(a1 + 224) = 0;
    }
  }
  v7 = (*(__int64 (__fastcall **)(__int64, _BYTE *, __int64))(*(_QWORD *)a1 + 40LL))(a1, a2, a3);
  v8 = v7;
  if ( v7 < 0 )
  {
    v10 = *(_QWORD *)a1;
    *(_BYTE *)(a1 + 250) = 1;
    v11 = (const char *)(*(__int64 (__fastcall **)(__int64))(v10 + 56))(a1);
    sub_38E60(a1, 0, (__int64)"GDB: network error: %s\n", v11);
  }
  else if ( v7 && v7 != a3 )
  {
    sub_38E60(a1, 0, (__int64)"GDB: Wrong number of bytes sent (expected %zu, sent %zd\n", a3, v7);
  }
  return v8;
}

