__int64 __fastcall sub_16090(__int64 a1, __int64 a2)
{
  const char *v2; // rcx
  bool v3; // zf
  unsigned int v4; // ebx
  __int64 v6; // [rsp+0h] [rbp-28h] BYREF
  __int128 v7; // [rsp+8h] [rbp-20h]
  unsigned __int64 v8; // [rsp+18h] [rbp-10h]

  v2 = src;
  v3 = *(_QWORD *)(a1 + 16) == 0;
  v8 = __readfsqword(0x28u);
  v6 = 0;
  v7 = 0;
  if ( !v3 )
    v2 = *(const char **)(a1 + 8);
  if ( (unsigned __int8)sub_15E80(qword_24798, a2, -1, (__int64)v2, &v6) )
    v4 = 0;
  else
    v4 = throw_idc_exception();
  if ( v6 )
  {
    *(_QWORD *)&v7 = 0;
    qfree();
  }
  return v4;
}

