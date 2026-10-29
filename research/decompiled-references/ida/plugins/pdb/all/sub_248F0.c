__int64 __fastcall sub_248F0(int a1, __int64 a2)
{
  unsigned __int64 v2; // rdi
  __int64 v3; // rax
  _BOOL8 v5; // rdx
  __int16 v6; // [rsp+4h] [rbp-14h] BYREF
  __int16 v7; // [rsp+6h] [rbp-12h] BYREF
  unsigned __int64 v8; // [rsp+8h] [rbp-10h]

  v2 = (unsigned int)(a1 + 1);
  v8 = __readfsqword(0x28u);
  if ( (unsigned int)v2 <= 0x1F )
  {
    v3 = 2149580801LL;
    if ( _bittest64(&v3, v2) )
    {
      if ( (**(unsigned __int8 (__fastcall ***)(__int64, __int64, __int16 *))a2)(a2, 20, &v6)
        && (**(unsigned __int8 (__fastcall ***)(__int64, __int64, __int16 *))a2)(a2, 30, &v7) )
      {
        v5 = 1;
        if ( v6 )
          v5 = v7 != 0;
        (*(void (__fastcall **)(__int64, __int64, _BOOL8))(*(_QWORD *)a2 + 16LL))(a2, 10, v5);
      }
    }
  }
  return 1;
}

