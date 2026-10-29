__int64 __fastcall sub_3B4150(int a1, __int64 a2)
{
  __int16 v4; // [rsp+6h] [rbp-12h] BYREF
  unsigned __int64 v5; // [rsp+8h] [rbp-10h]

  v5 = __readfsqword(0x28u);
  if ( a1 == 1 )
  {
    v4 = 0;
    (**(void (__fastcall ***)(__int64, __int64, __int16 *))a2)(a2, 1, &v4);
    (*(void (__fastcall **)(__int64, __int64, bool))(*(_QWORD *)a2 + 16LL))(a2, 2, v4 != 0);
    (*(void (__fastcall **)(__int64, __int64, bool))(*(_QWORD *)a2 + 16LL))(a2, 3, v4 != 0);
    (*(void (__fastcall **)(__int64, __int64, bool))(*(_QWORD *)a2 + 16LL))(a2, 8, v4 != 0);
  }
  return 1;
}

