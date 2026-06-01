__int64 __fastcall sub_13450(__int64 *a1, unsigned int a2)
{
  unsigned int v2; // r14d
  int v3; // eax
  char v4; // al
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx
  char v8; // r14
  __int64 v9; // rax
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v13; // rcx
  int v14; // edx
  const char *v15; // r12
  char v16; // al
  __int64 v17; // [rsp-10h] [rbp-40h]
  __int64 v18; // [rsp-8h] [rbp-38h]
  __int64 v19; // [rsp+0h] [rbp-30h] BYREF
  unsigned __int64 v20; // [rsp+8h] [rbp-28h]
  __int64 v21; // [rsp+10h] [rbp-20h]
  __int64 v22; // [rsp+18h] [rbp-18h]

  v20 = __readfsqword(0x28u);
  v2 = a2;
  if ( !a2 && (dword_3A5A0 & 1) != 0 )
  {
    if ( a1[126] )
    {
      v15 = (const char *)a1[125];
      if ( !strcmp(v15, "localhost") || !strcmp(v15, "127.0.0.1") )
      {
        v19 = 0;
        v16 = sub_12300((__int64)&v19, (__int64)"Please enter the PID to attach to");
        v2 = v19;
        if ( !v16 )
          return (unsigned int)-1;
      }
    }
  }
  v3 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*a1 + 632))(a1, v2);
  if ( (unsigned __int64)v3 > 8 )
  {
    sub_BCD0((__int64)"Please use %d-bit IDA to attach to %d-bit processes", 8 * v3, 8 * v3);
    return (unsigned int)-1;
  }
  qmutex_lock();
  sub_130C0((__int64)a1);
  v4 = sub_1DC20((int)a1 + 952, (unsigned int)"", (unsigned int)"", (unsigned int)"", 0, (_DWORD)a1, 0, v2);
  v7 = v17;
  v8 = v4;
  if ( v4 )
  {
    callui(1033, "", &callui, v18, v5, v6, v19, v20, v21, v22);
    v8 = sub_18E80(a1 + 119);
  }
  v9 = sub_1CCC0(a1 + 119, "", v7);
  sub_23380(a1, v9);
  v10 = *((_DWORD *)a1 + 241);
  if ( *((_BYTE *)a1 + 36) )
  {
    v13 = a1[1];
    v14 = 4;
    if ( v10 == 8 )
    {
      v13 = a1[2];
      v14 = 8;
    }
    a1[3] = v13;
    *((_DWORD *)a1 + 8) = v14;
  }
  *((_DWORD *)a1 + 69) = v10;
  sub_12B70(a1);
  v11 = v8 == 0 ? -1 : 1;
  qmutex_unlock();
  return v11;
}

