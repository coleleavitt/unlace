__int64 __fastcall sub_185A0(__int64 a1)
{
  bool v1; // zf
  __int64 *v2; // rsi
  unsigned int v3; // ebx
  __int64 v5; // [rsp+0h] [rbp-28h] BYREF
  __int128 v6; // [rsp+8h] [rbp-20h]
  unsigned __int64 v7; // [rsp+18h] [rbp-10h]

  v1 = *(_QWORD *)(a1 + 16) == 0;
  v7 = __readfsqword(0x28u);
  v6 = 0;
  v2 = (__int64 *)src;
  v5 = 0;
  if ( !v1 )
    v2 = *(__int64 **)(a1 + 8);
  if ( (unsigned __int8)sub_18520(qword_24798, v2, nullptr, &v5) )
    v3 = 0;
  else
    v3 = throw_idc_exception();
  if ( v5 )
  {
    *(_QWORD *)&v6 = 0;
    qfree();
  }
  return v3;
}

