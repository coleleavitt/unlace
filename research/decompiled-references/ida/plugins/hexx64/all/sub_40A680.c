unsigned __int64 __fastcall sub_40A680(_DWORD *a1, __int64 *a2)
{
  __int64 v2; // rdx
  __int64 v3; // rbp
  __int64 v4; // rbx
  __int64 *v5; // rax
  __int64 v6; // rdi
  __int64 v8; // [rsp+0h] [rbp-8h] BYREF
  __int64 vars0; // [rsp+8h] [rbp+0h]
  __int128 vars8; // [rsp+10h] [rbp+8h]
  __int64 vars18; // [rsp+20h] [rbp+18h]
  __int64 vars20; // [rsp+28h] [rbp+20h]
  __int64 vars28; // [rsp+30h] [rbp+28h]
  __int128 vars30; // [rsp+38h] [rbp+30h]
  __int64 vars40; // [rsp+48h] [rbp+40h]
  __int128 vars48; // [rsp+50h] [rbp+48h]
  __int64 vars58; // [rsp+60h] [rbp+58h]
  __int64 vars60; // [rsp+68h] [rbp+60h]
  __int128 vars68; // [rsp+70h] [rbp+68h]
  __int64 vars78; // [rsp+80h] [rbp+78h]
  int vars80; // [rsp+88h] [rbp+80h]
  unsigned __int64 vars90; // [rsp+98h] [rbp+90h]

  vars90 = __readfsqword(0x28u);
  v8 = 192;
  vars0 = 0;
  vars18 = -1;
  vars20 = 0;
  vars28 = 0;
  vars40 = 0;
  vars58 = 0;
  vars60 = -1;
  vars78 = 0;
  vars80 = 144;
  vars8 = 0;
  vars30 = 0;
  vars48 = 0;
  vars68 = 0;
  if ( sub_CFF70() == 1 )
    sub_40A500(a1, a2, (__int64)&v8, vars8);
  v2 = vars40;
  if ( vars40 )
  {
    v3 = vars48;
    if ( (_QWORD)vars48 )
    {
      v4 = 0;
      do
      {
        v5 = (__int64 *)(v2 + 24 * v4);
        v6 = *v5;
        if ( *v5 )
        {
          v5[1] = 0;
          qfree(v6);
          v2 = vars40;
        }
        ++v4;
      }
      while ( v3 != v4 );
    }
    *(_QWORD *)&vars48 = 0;
    qfree(v2);
  }
  if ( vars28 )
  {
    *(_QWORD *)&vars30 = 0;
    qfree(vars28);
  }
  if ( vars0 )
  {
    *(_QWORD *)&vars8 = 0;
    qfree(vars0);
  }
  return vars90 - __readfsqword(0x28u);
}

