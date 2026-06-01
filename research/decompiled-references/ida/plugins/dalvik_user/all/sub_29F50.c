__int64 __fastcall sub_29F50(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  char v6; // al
  __int64 v7; // rdx
  unsigned __int64 v8; // r12
  int v9; // r8d
  const char *v10; // rcx
  const char *v11; // rdx
  const void *v13; // r13
  char v14[8]; // [rsp+0h] [rbp-88h] BYREF
  __int64 v15; // [rsp+8h] [rbp-80h]
  char v16[8]; // [rsp+10h] [rbp-78h] BYREF
  __int64 v17; // [rsp+18h] [rbp-70h]
  char *v18; // [rsp+20h] [rbp-68h]
  __int128 v19; // [rsp+28h] [rbp-60h]
  __int64 v20; // [rsp+38h] [rbp-50h]
  __int128 v21; // [rsp+40h] [rbp-48h]
  int v22; // [rsp+50h] [rbp-38h]
  unsigned __int64 v23; // [rsp+58h] [rbp-30h]

  v6 = *(_BYTE *)(a2 + 96);
  v7 = *(_QWORD *)(a2 + 104);
  v23 = __readfsqword(0x28u);
  v8 = *(_QWORD *)(a2 + 120);
  v19 = 0;
  v18 = nullptr;
  v20 = 0;
  v16[0] = v6;
  v17 = v7;
  v21 = 0;
  if ( v8 > 1 )
  {
    v13 = *(const void **)(a2 + 112);
    v18 = (char *)qvector_reserve();
    *(_QWORD *)&v19 = v8;
    memmove(v18, v13, v8 - 1);
    v10 = nptr;
    v18[v8 - 1] = 0;
    v9 = *(_DWORD *)(a2 + 136);
    v6 = v16[0];
    *(_QWORD *)&v21 = 0;
    v22 = v9;
    if ( (_QWORD)v19 )
      LODWORD(v10) = (_DWORD)v18;
  }
  else
  {
    v9 = *(_DWORD *)(a2 + 136);
    v10 = nptr;
    *(_QWORD *)&v21 = 0;
    v22 = v9;
  }
  v11 = "CLASS";
  if ( v6 != 1 )
  {
    v11 = "ARRAY";
    if ( v6 == 2 )
      v11 = "INTERFACE";
  }
  sub_58110(a1, (unsigned int)"JDWP.EventKind.CLASS_PREPARE %s %s %x\n", (_DWORD)v11, (_DWORD)v10, v9, a6);
  qmutex_lock();
  sub_28700((__int64 *)(a1 + 1080), v16);
  v14[0] = v16[0];
  v15 = v17;
  sub_28E00((_QWORD *)(a1 + 1040), v14);
  qmutex_unlock();
  if ( v20 )
  {
    *(_QWORD *)&v21 = 0;
    qfree();
  }
  if ( v18 )
  {
    *(_QWORD *)&v19 = 0;
    qfree();
  }
  return 1;
}

