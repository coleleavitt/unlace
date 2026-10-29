__int64 __fastcall sub_20BB0(int *a1, _BYTE *a2, __int64 a3)
{
  unsigned int v5; // eax
  __int64 v6; // rbp
  unsigned int v7; // r13d
  const char *v8; // rdi
  int v9; // eax
  char v10; // al
  __int64 v11; // r12
  __int64 v12; // rbx
  _QWORD *v13; // rax
  __int64 v15; // [rsp+0h] [rbp-58h] BYREF
  __int128 v16; // [rsp+8h] [rbp-50h]
  unsigned __int64 v17; // [rsp+18h] [rbp-40h]

  v17 = __readfsqword(0x28u);
  v15 = 0;
  v16 = 0;
  v5 = sub_20770(&v15, (__int64)"getprop ro.build.version.sdk", a3);
  v6 = v15;
  v7 = v5;
  if ( (_BYTE)v5 )
  {
    if ( !(_QWORD)v16 )
    {
      v7 = 0;
      if ( !v15 )
        return v7;
      goto LABEL_17;
    }
    v8 = nptr;
    if ( *(_QWORD *)(v15 + 8) )
      v8 = *(const char **)v15;
    v9 = strtoul(v8, nullptr, 10);
    if ( a1 )
      *a1 = v9;
    if ( (unsigned int)(v9 - 19) <= 1 )
    {
      v10 = sub_20770(&v15, (__int64)"getprop persist.sys.dalvik.vm.lib", a3);
      v6 = v15;
      if ( v10 )
      {
        v10 = 0;
        if ( (_QWORD)v16 == 1 )
        {
          if ( *(_QWORD *)(v15 + 8) )
            v10 = strcmp(*(const char **)v15, "libart.so") == 0;
        }
      }
    }
    else
    {
      v6 = v15;
      v10 = v9 > 20;
    }
    if ( a2 )
      *a2 = v10;
  }
  if ( v6 )
  {
    v11 = v16;
    if ( (_QWORD)v16 )
    {
      v12 = 0;
      do
      {
        v13 = (_QWORD *)(v6 + 24 * v12);
        if ( *v13 )
        {
          v13[1] = 0;
          qfree();
          v6 = v15;
        }
        ++v12;
      }
      while ( v11 != v12 );
    }
LABEL_17:
    *(_QWORD *)&v16 = 0;
    qfree();
  }
  return v7;
}

