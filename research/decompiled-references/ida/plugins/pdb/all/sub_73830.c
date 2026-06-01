__int64 __fastcall sub_73830(_QWORD *a1)
{
  __int64 result; // rax
  __int64 v2; // rbp
  __int64 v3; // rbx
  __int64 (__fastcall *v4)(__int64, __int64); // r12
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 (__fastcall *v7)(__int64, __int64); // rbp
  __int64 v8; // rax
  __int64 v9; // rdi
  unsigned __int8 v10; // [rsp+Fh] [rbp-49h]
  __int16 v11; // [rsp+1Eh] [rbp-3Ah] BYREF
  __int64 v12; // [rsp+20h] [rbp-38h] BYREF
  __int128 v13; // [rsp+28h] [rbp-30h]
  unsigned __int64 v14; // [rsp+38h] [rbp-20h]

  v14 = __readfsqword(0x28u);
  result = (*(__int64 (__fastcall **)(_QWORD, __int16 *, __int64))(*(_QWORD *)*a1 + 48LL))(*a1, &v11, 2);
  if ( (_BYTE)result && v11 < 0 )
  {
    if ( (unsigned __int16)(v11 + 0x8000) > 0x1Cu )
    {
      return 0;
    }
    else
    {
      v2 = word_95220[(unsigned __int16)(v11 + 0x8000)];
      if ( (_WORD)v2 )
      {
        v3 = *a1;
        v4 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)*a1 + 40LL);
        v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 32LL))(v3);
        return v4(v3, v2 + v5);
      }
      else if ( v11 == -32752 )
      {
        result = (*(__int64 (__fastcall **)(_QWORD, __int64 *, __int64))(*(_QWORD *)*a1 + 48LL))(*a1, &v12, 2);
        if ( (_BYTE)result )
        {
          v6 = *a1;
          v7 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)*a1 + 40LL);
          v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 32LL))(v6);
          return v7(v6, v8 + (unsigned __int16)v12);
        }
      }
      else
      {
        result = 0;
        if ( v11 == -32741 )
        {
          v9 = *a1;
          v12 = 0;
          v13 = 0;
          result = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v9 + 56LL))(v9, &v12);
          if ( v12 )
          {
            v10 = result;
            *(_QWORD *)&v13 = 0;
            qfree(v12);
            return v10;
          }
        }
      }
    }
  }
  return result;
}

