__int64 __fastcall sub_105A50(__int64 a1, const void *a2, __int64 *a3)
{
  __int64 *v3; // r13
  __int64 *v4; // rbx
  __int64 v5; // rdi
  unsigned int v6; // r12d
  __int64 v7; // rdi
  __int64 v9; // rax

  v3 = a3;
  v4 = *(__int64 **)(a1 + 8);
  v5 = v4[4];
  if ( v5 )
    xmmword_241500(v5);
  if ( (_DWORD)a2 == 12 )
  {
    a2 = (const void *)v4[3];
    v6 = 0;
    *v3 = (__int64)sub_105970("memdb(%p,%lld)", a2, *v4);
  }
  else
  {
    v6 = 12;
    if ( (_DWORD)a2 == 36 )
    {
      v9 = *v3;
      a3 = (__int64 *)*v4;
      if ( *v4 > *v3 )
      {
        if ( v9 < 0 )
          v9 = v4[2];
        else
          v9 = *v4;
      }
      v4[2] = v9;
      v6 = 0;
      *v3 = v9;
    }
  }
  v7 = v4[4];
  if ( v7 )
    xmmword_241510(v7, a2, a3);
  return v6;
}
