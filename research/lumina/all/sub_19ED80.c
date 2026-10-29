unsigned __int64 __fastcall sub_19ED80(__int64 a1)
{
  char *v3; // r14
  int v4; // r13d
  int v5; // eax
  int v6; // r13d
  int v7; // eax
  __int64 v8; // r15
  int v9; // r8d
  unsigned __int64 v10; // rdx
  __int64 v11; // r9
  char *v12; // rsi
  __int64 v13; // rax
  size_t v14; // rcx
  __int64 v15; // r9
  int v16; // eax
  __int64 v17; // r15
  __int64 v18; // r14
  void *v19; // rdi
  int v20; // ebx
  const char *v21; // rsi
  const char *v22; // rdx
  int v23; // [rsp+8h] [rbp-10D0h]
  __int64 v24; // [rsp+8h] [rbp-10D0h]
  __int64 v25; // [rsp+10h] [rbp-10C8h]
  int v26; // [rsp+10h] [rbp-10C8h]
  __int64 v27; // [rsp+18h] [rbp-10C0h]
  void *ptr; // [rsp+20h] [rbp-10B8h] BYREF
  __int128 v29; // [rsp+28h] [rbp-10B0h]
  char v30[40]; // [rsp+40h] [rbp-1098h] BYREF
  __int64 v31; // [rsp+68h] [rbp-1070h]
  __int64 v32; // [rsp+80h] [rbp-1058h]
  char filename[4096]; // [rsp+90h] [rbp-1048h] BYREF
  _BYTE v34[8]; // [rsp+1090h] [rbp-48h] BYREF
  unsigned __int64 v35; // [rsp+1098h] [rbp-40h]

  v35 = __readfsqword(0x28u);
  if ( *(_BYTE *)(a1 + 5640) )
  {
    sub_1998A0(filename, (char *)(a1 + 1032), 4096);
    v3 = sub_1976D0(filename);
    v4 = time(nullptr);
    v5 = rand();
    sub_19D9D0(v3, v34 - v3, ".tmp%u.reg", v5 % 1000 + 1000 * v4);
    v6 = sub_197B10(filename, 0x1A4u);
    if ( v6 == -1 )
    {
      v22 = sub_2C700(-1);
      sub_2F260((__int64)"%s: %s", filename, v22);
    }
    v29 = 0;
    ptr = nullptr;
    ptr = sub_1987B0((__int64)&ptr, nullptr, 4u, 1u);
    memset((char *)ptr + v29, 0, 4 - v29);
    *(_QWORD *)&v29 = 4;
    *(_DWORD *)ptr = 929121385;
    sub_19E230((__int64)&ptr, a1 + 5648);
    v7 = sub_1A2310(929121385, (char *)ptr + 4, v29 - 4);
    v8 = v29;
    v9 = v7;
    v10 = v29 + 4;
    v11 = v29 + 4;
    if ( (unsigned __int64)v29 >= 0xFFFFFFFFFFFFFFFCLL )
    {
      v15 = 0x7FFFFFFFFFFFFFFFLL;
    }
    else
    {
      v12 = (char *)ptr;
      v13 = v29;
      v14 = 4;
      if ( *((_QWORD *)&v29 + 1) < v10 )
      {
        v27 = v29 + 4;
        v26 = v9;
        v24 = v29 + 4;
        ptr = sub_1987B0((__int64)&ptr, ptr, v10, 1u);
        v12 = (char *)ptr;
        v13 = v29;
        v11 = v27;
        v9 = v26;
        v14 = v24 - v29;
      }
      v25 = v11;
      v23 = v9;
      memset(&v12[v13], 0, v14);
      v9 = v23;
      v15 = v25;
    }
    *(_QWORD *)&v29 = v15;
    *(_DWORD *)((char *)ptr + v8) = v9;
    v16 = sub_197910(v6, ptr, v29);
    v17 = v29;
    v18 = v16;
    sub_1979E0(v6);
    if ( !(unsigned int)sub_197B50(filename, (__int64)v30) )
    {
      *(_QWORD *)(a1 + 5696) = v31;
      *(_QWORD *)(a1 + 5704) = v32;
    }
    if ( v18 != v17 || (unsigned int)sub_198120(filename, (const char *)(a1 + 1032)) )
    {
      v20 = *__errno_location();
      sub_198100(filename);
      sub_19F0D0(qword_2439F8);
      v21 = (const char *)sub_1996B0(v20);
      sub_2F260((__int64)"Fatal registry error: %s", v21);
    }
    v19 = ptr;
    *(_BYTE *)(a1 + 5640) = 0;
    if ( v19 )
    {
      *(_QWORD *)&v29 = 0;
      j__free(v19);
    }
  }
  return v35 - __readfsqword(0x28u);
}
