unsigned __int64 __fastcall sub_164280(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 v10; // [rsp+0h] [rbp-18h] BYREF
  unsigned __int64 v11; // [rsp+8h] [rbp-10h]

  v11 = __readfsqword(0x28u);
  if ( !(unsigned int)sub_FEBD0(a1, a2) )
    sub_FF240(8, (const char *)&v10);
  v7 = v10;
  if ( v10 < 0 )
  {
    v7 = -(v10 & 0x7FFFFFFFFFFFFFFFLL);
    v10 = v7;
  }
  v8 = *(_QWORD *)a1;
  if ( (*(_WORD *)(*(_QWORD *)a1 + 20LL) & 0x9000) != 0 )
  {
    sub_C9430(v8, v7, v3, v4, v5, v6);
  }
  else
  {
    *(_QWORD *)v8 = v7;
    *(_WORD *)(v8 + 20) = 4;
  }
  return __readfsqword(0x28u) ^ v11;
}
