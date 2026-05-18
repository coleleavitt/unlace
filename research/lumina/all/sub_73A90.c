__int64 __fastcall sub_73A90(char *a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  void *v5; // r15
  void *v6; // r14
  __int64 (__fastcall *v7)(__int64, _QWORD *, __int64); // r8
  __int64 v9; // [rsp+10h] [rbp-318h]
  char *v11; // [rsp+48h] [rbp-2E0h] BYREF
  __int64 v12; // [rsp+50h] [rbp-2D8h] BYREF
  __int128 v13; // [rsp+58h] [rbp-2D0h]
  __int64 v14; // [rsp+68h] [rbp-2C0h] BYREF
  __int128 v15; // [rsp+70h] [rbp-2B8h]
  __int128 v16; // [rsp+80h] [rbp-2A8h]
  _BYTE v17[24]; // [rsp+90h] [rbp-298h] BYREF
  _BYTE v18[24]; // [rsp+A8h] [rbp-280h] BYREF
  _BYTE v19[32]; // [rsp+C0h] [rbp-268h] BYREF
  void *v20; // [rsp+E0h] [rbp-248h] BYREF
  __int128 v21; // [rsp+E8h] [rbp-240h]
  void *ptr; // [rsp+F8h] [rbp-230h] BYREF
  __int128 v23; // [rsp+100h] [rbp-228h]
  __int64 v24; // [rsp+110h] [rbp-218h] BYREF
  __int128 v25; // [rsp+118h] [rbp-210h]
  __int64 v26; // [rsp+128h] [rbp-200h]
  __int128 v27; // [rsp+130h] [rbp-1F8h]
  int v28; // [rsp+140h] [rbp-1E8h]
  __int64 v29; // [rsp+148h] [rbp-1E0h]
  int v30; // [rsp+150h] [rbp-1D8h]
  int v31; // [rsp+160h] [rbp-1C8h]
  void *v32; // [rsp+168h] [rbp-1C0h] BYREF
  __int128 v33; // [rsp+170h] [rbp-1B8h]
  _BYTE v34[72]; // [rsp+180h] [rbp-1A8h] BYREF
  void *v35; // [rsp+1C8h] [rbp-160h]
  __int64 v36; // [rsp+1F8h] [rbp-130h]
  char *v37; // [rsp+200h] [rbp-128h] BYREF
  void *v38; // [rsp+208h] [rbp-120h] BYREF
  __int128 v39; // [rsp+210h] [rbp-118h]
  _BYTE v40[72]; // [rsp+220h] [rbp-108h] BYREF
  void *v41; // [rsp+268h] [rbp-C0h]
  __int64 v42; // [rsp+298h] [rbp-90h]
  void *v43; // [rsp+2A0h] [rbp-88h] BYREF
  __int128 v44; // [rsp+2A8h] [rbp-80h]
  void *v45; // [rsp+2B8h] [rbp-70h] BYREF
  __int128 v46; // [rsp+2C0h] [rbp-68h]
  __int128 v47; // [rsp+2D0h] [rbp-58h]
  unsigned __int64 v48; // [rsp+2E8h] [rbp-40h]

  v11 = a1;
  v48 = __readfsqword(0x28u);
  v3 = operator new(0xF0u);
  v13 = 0;
  v12 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  sub_73590((__int64)v17, nullptr, nullptr, nullptr);
  v20 = nullptr;
  v21 = 0;
  sub_66360(&v20, (__int64)v17);
  ptr = nullptr;
  v23 = 0;
  sub_66360(&ptr, (__int64)v18);
  v24 = 0;
  v25 = 0;
  sub_66360(&v24, (__int64)v19);
  v26 = 0;
  v28 = 0;
  v29 = 0;
  v30 = 0;
  v31 = 0;
  v32 = nullptr;
  v27 = 0;
  v33 = 0;
  sub_2F620((__int64)v34, (__int64)&v20);
  v36 = 0;
  v38 = nullptr;
  LODWORD(v37) = v31;
  v42 = 0;
  v43 = nullptr;
  v45 = nullptr;
  v39 = 0;
  sub_66360(&v38, (__int64)&v32);
  sub_2F620((__int64)v40, (__int64)v34);
  v42 = 0;
  v43 = nullptr;
  v44 = 0;
  sub_66360(&v43, (__int64)&v12);
  v45 = nullptr;
  v46 = 0;
  sub_66360(&v45, (__int64)&v14);
  v4 = v42;
  *(_BYTE *)(v3 + 8) = 44;
  *(_QWORD *)(v3 + 24) = 0;
  v9 = v4;
  v5 = v43;
  *(_QWORD *)v3 = &off_237518;
  v6 = v45;
  LODWORD(v4) = (_DWORD)v37;
  *(_OWORD *)(v3 + 32) = 0;
  *(_DWORD *)(v3 + 16) = v4;
  v47 = 0;
  sub_66360((_QWORD *)(v3 + 24), (__int64)&v38);
  sub_2F620(v3 + 48, (__int64)v40);
  *(_QWORD *)(v3 + 176) = 0;
  *(_OWORD *)(v3 + 184) = 0;
  *(_QWORD *)(v3 + 168) = v9;
  sub_66360((_QWORD *)(v3 + 176), (__int64)&v43);
  *(_QWORD *)(v3 + 200) = 0;
  *(_OWORD *)(v3 + 208) = 0;
  sub_66360((_QWORD *)(v3 + 200), (__int64)&v45);
  *(_OWORD *)(v3 + 224) = 0;
  if ( v6 )
    j__free(v6);
  if ( v5 )
    j__free(v5);
  if ( v41 )
    j__free(v41);
  v43 = v5;
  v45 = v6;
  sub_2F570((__int64)v40);
  if ( v38 )
    j__free(v38);
  if ( v35 )
    j__free(v35);
  sub_2F570((__int64)v34);
  if ( v32 )
    j__free(v32);
  sub_2F5C0((__int64)&v20);
  sub_2F570((__int64)v17);
  if ( v11 )
  {
    v7 = *(__int64 (__fastcall **)(__int64, _QWORD *, __int64))(*(_QWORD *)v3 + 24LL);
    if ( v7 == sub_718D0 )
    {
      v37 = v11;
      if ( !__CFADD__(a2, v11) && (unsigned __int8)sub_71960(v3 + 16, &v37, a2) )
        return v3;
    }
    else if ( ((unsigned __int8 (__fastcall *)(__int64, char **, __int64, _QWORD))v7)(v3, &v11, a2, a3) )
    {
      return v3;
    }
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
    return 0;
  }
  return v3;
}
