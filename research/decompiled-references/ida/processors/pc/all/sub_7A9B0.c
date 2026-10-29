__int64 __fastcall sub_7A9B0(__int64 a1, __int64 *a2, __int64 a3, double a4)
{
  __int64 v5; // rax
  __int64 v7; // rax
  __int64 v8[5]; // [rsp+0h] [rbp-28h] BYREF

  v8[1] = __readfsqword(0x28u);
  v5 = sub_741C0((unsigned __int64)a1, a3, a4);
  v8[0] = v5;
  if ( !v5 )
  {
    if ( (unsigned __int8)is_call_insn() )
    {
      v7 = sub_73080(a1, a3, 0);
      sub_79D80((unsigned __int64)a1, a3, v7, v8, 0);
    }
    v5 = v8[0];
  }
  *a2 = v5;
  return 1;
}
