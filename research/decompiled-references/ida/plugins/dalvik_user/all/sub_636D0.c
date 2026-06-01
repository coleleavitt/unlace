__int64 __fastcall sub_636D0(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rbp
  int v3; // eax
  __int64 v4; // rax
  unsigned int v5; // ebx
  __int64 v7; // [rsp+0h] [rbp-428h] BYREF
  _QWORD v8[132]; // [rsp+8h] [rbp-420h]

  v8[128] = __readfsqword(0x28u);
  v1 = (*(__int64 (__fastcall **)(_QWORD))(qword_7FC80 + 240))(*(_QWORD *)(a1 + 88));
  if ( v1 )
  {
    v2 = v1;
    v3 = (*(__int64 (__fastcall **)(_QWORD))(qword_7FC80 + 248))(*(_QWORD *)(a1 + 88));
    if ( v3 )
    {
      *(_DWORD *)(a1 + 72) = v3;
      *(_QWORD *)(a1 + 64) = "openssl_verify";
      v5 = 0;
    }
    else
    {
      v4 = (*(__int64 (__fastcall **)(__int64))(qword_7FC80 + 352))(v2);
      if ( (*(int (__fastcall **)(__int64, __int64, __int64 *, __int64))(qword_7FC80 + 320))(v4, 13, &v7, 1024) > 0
        && (v8[0] ^ 0x7961722D7865682ELL | v7 ^ 0x6C616E7265746E69LL || *(_QWORD *)((char *)v8 + 6) != 0x6D6F632E737961LL) )
      {
        v5 = 1;
      }
      else
      {
        *(_QWORD *)(a1 + 64) = "invalid_remote_certificate";
        v5 = 0;
      }
    }
    (*(void (__fastcall **)(__int64))(qword_7FC80 + 344))(v2);
  }
  else
  {
    *(_QWORD *)(a1 + 64) = "openssl";
    return 0;
  }
  return v5;
}

