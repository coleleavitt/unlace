unsigned __int64 __fastcall sub_183280(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rax
  __int16 v4; // ax
  __int64 v5; // rax
  __int64 vars0; // [rsp+0h] [rbp+0h] BYREF
  __int64 vars8; // [rsp+8h] [rbp+8h]
  unsigned __int64 vars18; // [rsp+18h] [rbp+18h]

  vars18 = __readfsqword(0x28u);
  sub_183140(a1, a2, a3);
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v3 = *(_QWORD *)(a1 + 560);
        vars0 = 1;
        vars8 = 0;
        v4 = *(_WORD *)(v3 + 24);
        if ( v4 != 42 )
          break;
        sub_183140(a1, (__int64)&vars0, 1);
        *(_QWORD *)(a2 + 8) *= vars8;
      }
      if ( v4 != 47 )
        break;
      sub_183140(a1, (__int64)&vars0, 1);
      if ( !vars8 )
LABEL_17:
        __longjmp_chk(a1 + 360, 86);
      v5 = *(_QWORD *)(a2 + 8);
      if ( *(_BYTE *)a2 || (_BYTE)vars0 )
        *(_QWORD *)(a2 + 8) = v5 / (unsigned __int64)vars8;
      else
        *(_QWORD *)(a2 + 8) = v5 / vars8;
    }
    if ( v4 != 37 )
      return vars18 - __readfsqword(0x28u);
    sub_183140(a1, (__int64)&vars0, 1);
    if ( !vars8 )
      goto LABEL_17;
    if ( *(_BYTE *)a2 || (_BYTE)vars0 )
      *(_QWORD *)(a2 + 8) %= (unsigned __int64)vars8;
    else
      *(__int64 *)(a2 + 8) %= vars8;
  }
}
