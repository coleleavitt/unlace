__int64 __fastcall sub_2A6730(__int64 a1, __int64 *a2)
{
  __int64 v2; // r15
  unsigned __int64 v3; // rax
  unsigned int v5; // ebx
  int v6; // edx
  __int64 v7; // rax
  bool v8; // zf
  const char *v9; // rsi
  int v10; // eax
  const char *v12; // [rsp+0h] [rbp-88h]
  int v13; // [rsp+10h] [rbp-78h] BYREF
  __int64 v14; // [rsp+18h] [rbp-70h]
  int v15; // [rsp+20h] [rbp-68h]
  int v16; // [rsp+30h] [rbp-58h] BYREF
  __int64 v17; // [rsp+38h] [rbp-50h]
  int v18; // [rsp+40h] [rbp-48h]
  unsigned __int64 v19; // [rsp+48h] [rbp-40h]

  v19 = __readfsqword(0x28u);
  v2 = *a2;
  v3 = *(int *)(*a2 + 152);
  if ( v3 >= *(_QWORD *)(*a2 + 136) )
  {
    return (unsigned int)-1;
  }
  else
  {
    v5 = *(_DWORD *)(*a2 + 152);
    while ( 1 )
    {
      v6 = 0;
      v7 = *(_QWORD *)(v2 + 128) + 32 * v3;
      v13 = 0;
      v8 = *(_QWORD *)(v7 + 8) == 0;
      v16 = 0;
      v9 = s1;
      if ( !v8 )
      {
        v12 = *(const char **)v7;
        v10 = strlen(*(const char **)v7);
        LODWORD(v9) = (_DWORD)v12;
        v6 = v10;
        if ( v10 > 0 )
          v6 = v10 - 1;
      }
      sub_382E90(v2, (_DWORD)v9, v6, 1, (unsigned int)&v13, 0, (__int64)&v16);
      if ( v13 == 4 && v14 == *(_QWORD *)(a1 + 8) && v15 == *(_DWORD *)(a1 + 16) )
        break;
      if ( v16 == 4 && v17 == *(_QWORD *)(a1 + 8) && v18 == *(_DWORD *)(a1 + 16) )
        break;
      v2 = *a2;
      v3 = (int)++v5;
      if ( (unsigned __int64)(int)v5 >= *(_QWORD *)(*a2 + 136) )
        return (unsigned int)-1;
    }
  }
  return v5;
}

