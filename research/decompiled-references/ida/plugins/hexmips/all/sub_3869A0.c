__int64 __fastcall sub_3869A0(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  unsigned int v5; // r14d
  unsigned __int64 v6; // rax
  _BYTE **v7; // rax
  unsigned int v8; // eax
  int v10; // [rsp+0h] [rbp-78h] BYREF
  _QWORD *v11; // [rsp+8h] [rbp-70h]
  _DWORD v12[4]; // [rsp+20h] [rbp-58h] BYREF
  int v13; // [rsp+30h] [rbp-48h]
  unsigned __int64 v14; // [rsp+38h] [rbp-40h]

  v14 = __readfsqword(0x28u);
  if ( !a4 )
    a4 = *(_DWORD *)(a1 + 152);
  v5 = a4 + 2;
  v6 = a4 + 2;
  if ( v6 >= *(_QWORD *)(a1 + 136) )
  {
    return (unsigned int)-1;
  }
  else
  {
    while ( 1 )
    {
      v12[0] = 0;
      v7 = (_BYTE **)(*(_QWORD *)(a1 + 128) + 32 * v6);
      v10 = 0;
      if ( sub_385890(a1, *v7, 0, 1, 0, (__int64)&v10, (__int64)v12)
        && v10 == 1
        && *v11 == a2
        && (v13 & 0x40000000) != 0 )
      {
        v8 = (2 * v13) >> 1;
        if ( (v13 & 0x20000000) == 0 )
          v8 = v13 & 0xBFFFFFFF;
        if ( v8 == a3 )
          break;
      }
      v6 = (int)++v5;
      if ( (unsigned __int64)(int)v5 >= *(_QWORD *)(a1 + 136) )
        return (unsigned int)-1;
    }
  }
  return v5;
}

