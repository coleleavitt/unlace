__int64 __fastcall sub_313C0(__int64 a1, unsigned int *a2, _QWORD *a3)
{
  __int64 v3; // rdx
  __int64 v4; // rbp
  __int64 v5; // rdx
  __int64 v6; // r12
  __int64 v7; // rbx
  _QWORD *v8; // rax
  int v10; // [rsp+0h] [rbp-8h] BYREF
  __int64 vars0; // [rsp+8h] [rbp+0h]
  __int128 vars8; // [rsp+10h] [rbp+8h]
  __int64 vars18; // [rsp+20h] [rbp+18h]
  int vars20; // [rsp+28h] [rbp+20h]
  __int64 vars28; // [rsp+30h] [rbp+28h]
  __int128 vars30; // [rsp+38h] [rbp+30h]
  __int64 vars40; // [rsp+48h] [rbp+40h]
  __int128 vars48; // [rsp+50h] [rbp+48h]
  unsigned int vars58; // [rsp+60h] [rbp+58h]
  __int64 vars60; // [rsp+68h] [rbp+60h]
  __int128 vars68; // [rsp+70h] [rbp+68h]
  __int64 vars78; // [rsp+80h] [rbp+78h]
  int vars80; // [rsp+88h] [rbp+80h]
  __int64 vars88; // [rsp+90h] [rbp+88h]
  _QWORD *vars90; // [rsp+98h] [rbp+90h]
  __int64 vars98; // [rsp+A0h] [rbp+98h]
  __int64 varsA0; // [rsp+A8h] [rbp+A0h]
  int varsA8; // [rsp+B0h] [rbp+A8h]
  unsigned __int64 varsB0; // [rsp+B8h] [rbp+B0h]

  varsB0 = __readfsqword(0x28u);
  vars90 = a3;
  v3 = *a3;
  vars88 = a1;
  v10 = 192;
  vars0 = 0;
  vars18 = -1;
  vars20 = 0;
  vars28 = 0;
  vars40 = 0;
  vars58 = 0;
  vars60 = -1;
  vars78 = 0;
  vars80 = 144;
  vars98 = 0;
  varsA0 = -1;
  varsA8 = 0x1000000;
  vars8 = 0;
  vars30 = 0;
  vars48 = 0;
  vars68 = 0;
  sub_30C00(&v10, a1, v3);
  v4 = -1;
  if ( (_WORD)vars58 == 1 && HIWORD(vars58) )
  {
    *a2 = HIWORD(vars58);
    v4 = vars60;
  }
  v5 = vars40;
  if ( vars40 )
  {
    v6 = vars48;
    if ( (_QWORD)vars48 )
    {
      v7 = 0;
      do
      {
        v8 = (_QWORD *)(v5 + 24 * v7);
        if ( *v8 )
        {
          v8[1] = 0;
          qfree();
          v5 = vars40;
        }
        ++v7;
      }
      while ( v6 != v7 );
    }
    *(_QWORD *)&vars48 = 0;
    qfree();
  }
  if ( vars28 )
  {
    *(_QWORD *)&vars30 = 0;
    qfree();
  }
  if ( vars0 )
  {
    *(_QWORD *)&vars8 = 0;
    qfree();
  }
  return v4;
}

