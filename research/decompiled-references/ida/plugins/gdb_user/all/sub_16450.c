__int64 __fastcall sub_16450(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  int v4; // edx
  int v5; // ecx
  int v6; // r8d
  int v7; // r9d
  int v8; // ecx
  unsigned int v9; // ebp
  int v10; // r8d
  int v11; // r9d
  size_t v13; // rbp
  void *v14; // r12
  const char *v15; // rdx
  void *v16; // rdi
  void *src; // [rsp+0h] [rbp-68h] BYREF
  size_t n[3]; // [rsp+8h] [rbp-60h]
  __int64 v19; // [rsp+20h] [rbp-48h]
  __int128 v20; // [rsp+28h] [rbp-40h]
  unsigned __int64 v21; // [rsp+38h] [rbp-30h]

  v3 = *(_QWORD *)(a1 + 864);
  v21 = __readfsqword(0x28u);
  src = nullptr;
  *(_OWORD *)n = 0;
  if ( !(unsigned __int8)sub_3D000(v3, &src) )
  {
    sub_48620(a1, (unsigned int)"GDB: can't retrieve library list from remote\n", v4, v5, v6, v7);
LABEL_7:
    v9 = 0;
    goto LABEL_3;
  }
  v9 = sub_15CA0(a1, a2, (__int64)&src);
  if ( (_BYTE)v9 )
    goto LABEL_3;
  v13 = n[0];
  v14 = src;
  v19 = 0;
  v20 = 0;
  if ( !n[0] )
    goto LABEL_9;
  v16 = nullptr;
  if ( n[0] != -1 )
  {
    v19 = qvector_reserve();
    v16 = (void *)v19;
  }
  *(_QWORD *)&v20 = v13 + 1;
  memmove(v16, v14, v13);
  *(_BYTE *)(v19 + v13) = 0;
  if ( (_QWORD)v20 )
    LODWORD(v15) = v19;
  else
LABEL_9:
    v15 = s;
  sub_48620(a1, (unsigned int)"GDB: can't parse library list xml from remote:\n%s\n", (_DWORD)v15, v8, v10, v11);
  if ( !v19 )
    goto LABEL_7;
  *(_QWORD *)&v20 = 0;
  v9 = 0;
  qfree();
LABEL_3:
  if ( src )
  {
    n[0] = 0;
    qfree();
  }
  return v9;
}

