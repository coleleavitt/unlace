__int64 __fastcall sub_29D0(int a1, __int64 a2)
{
  __int16 v3; // [rsp+6h] [rbp-12h] BYREF
  unsigned __int64 v4; // [rsp+8h] [rbp-10h]

  v4 = __readfsqword(0x28u);
  v3 = 0;
  if ( a1 == 1 && (**(unsigned __int8 (__fastcall ***)(__int64, __int64, __int16 *))a2)(a2, 1, &v3) )
    (*(void (__fastcall **)(__int64, __int64, bool))(*(_QWORD *)a2 + 16LL))(a2, 2, v3 != 0);
  return 1;
}
