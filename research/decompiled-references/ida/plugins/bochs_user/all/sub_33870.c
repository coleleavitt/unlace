__int64 __fastcall sub_33870(__int64 a1, const char *a2, __int64 a3, double a4, double a5)
{
  unsigned int v8; // ebx
  int v10; // r15d
  unsigned int v11; // eax
  __int64 v12; // rdi
  __int64 v13; // rdi
  char v14; // al
  __int64 v15; // rsi
  int v16; // eax
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rsi
  __int64 v20; // rsi
  __int64 v21; // rdi
  unsigned __int64 v22; // rax
  const char *v23; // rcx
  _QWORD *v24; // rax
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // rax
  const char *v28; // rax
  const char *v29; // rax
  const char *v30; // [rsp+10h] [rbp-12A8h] BYREF
  __int128 v31; // [rsp+18h] [rbp-12A0h]
  __int64 v32; // [rsp+30h] [rbp-1288h] BYREF
  __int128 v33; // [rsp+38h] [rbp-1280h]
  _QWORD v34[3]; // [rsp+50h] [rbp-1268h] BYREF
  int v35; // [rsp+6Ch] [rbp-124Ch]
  int v36; // [rsp+70h] [rbp-1248h]
  int v37; // [rsp+74h] [rbp-1244h]
  int v38; // [rsp+78h] [rbp-1240h]
  int v39; // [rsp+80h] [rbp-1238h]
  _BYTE v40[4096]; // [rsp+270h] [rbp-1048h] BYREF
  int v41; // [rsp+1270h] [rbp-48h]
  int v42; // [rsp+1274h] [rbp-44h]
  unsigned __int64 v43; // [rsp+1278h] [rbp-40h]

  v43 = __readfsqword(0x28u);
  v8 = sub_33610(a1, a4, a5);
  if ( !v8 )
  {
    sub_48C60(v34);
    if ( *(_BYTE *)(a1 + 2713) )
    {
      v10 = *(_DWORD *)(*(_QWORD *)(a1 + 1200) + 8224LL);
      v11 = sub_46C00(*(_QWORD *)(a1 + 2704));
    }
    else
    {
      v36 = getinf();
      v13 = *(_QWORD *)(a1 + 2704);
      v39 = *(_QWORD *)(*(_QWORD *)(a1 + 1200) + 8216LL);
      v10 = v39;
      v11 = sub_474C0(v13);
    }
    v8 = v11;
    if ( v11 )
    {
      v28 = (const char *)sub_44660(*(_QWORD *)(a1 + 2704));
      sub_EB00((__int64)"AUTOHIDE NONE\n%s", v28);
    }
    else
    {
      v12 = *(_QWORD *)(a1 + 1200);
      if ( *(_BYTE *)(v12 + 8230) )
      {
        v30 = nullptr;
        v31 = 0;
        v14 = sub_30780(v12 + 4096, (__int64)&v30);
        v15 = *(_QWORD *)(a1 + 1200);
        if ( v14 )
        {
          v16 = *(_DWORD *)(v15 + 8204);
          v37 = 1480741448;
          v35 = 8;
          v38 = v16;
          v32 = 0;
          v33 = 0;
          v17 = sub_26200(a1 + 2720);
          v18 = v33;
          v19 = v32;
          if ( *((_QWORD *)&v33 + 1) < (unsigned __int64)(v33 + 1) )
          {
            v32 = qvector_reserve();
            v19 = v32;
            v18 = v33;
          }
          *(_QWORD *)(v19 + 8 * v18) = v17;
          v20 = *(_QWORD *)(a1 + 1200);
          *(_QWORD *)&v33 = v33 + 1;
          qstrncpy();
          v21 = *(_QWORD *)(a1 + 2768);
          v41 = *(_DWORD *)(*(_QWORD *)(a1 + 1200) + 8196LL);
          v22 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v21 + 88LL))(v21, v20);
          v23 = s1;
          v42 = (((unsigned int)(v10 << 10) + (v22 & 0xFFFFF) + 0xFFFFF) >> 20) + (v22 >> 20);
          if ( (_QWORD)v31 )
            v23 = v30;
          v8 = sub_49790(v34, a2, a3, v23, &v32, v40);
          if ( v8 )
          {
            v29 = (const char *)sub_48D20(v34);
            sub_EB00((__int64)"AUTOHIDE NONE\nError: could not create bochs disk image <%s>!\n%s", a2, v29);
          }
          else
          {
            v24 = *(_QWORD **)(a1 + 1200);
            if ( v24[1030] == -1
              || (v25 = v24[1031], v25 == -1)
              || (v26 = v24[1032], v26 == -1)
              || (v27 = v24[1033], v27 == -1) )
            {
              sub_EB00((__int64)"AUTOHIDE NONE\nStart, Exit or Stack parameters are not defined!");
              v8 = 2;
            }
            else if ( v25 < v26 || v27 < v25 )
            {
              sub_EB00((__int64)"AUTOHIDE NONE\nThe definition of the stack segment is incorrect!");
              v8 = 3;
            }
          }
          if ( v32 )
          {
            *(_QWORD *)&v33 = 0;
            qfree();
          }
        }
        else
        {
          sub_EB00((__int64)"AUTOHIDE NONE\nCould not read bochsrc template file <%s>", (const char *)(v15 + 4096));
          v8 = 18;
        }
        if ( v30 )
        {
          *(_QWORD *)&v31 = 0;
          qfree();
        }
      }
    }
    if ( v34[0] )
    {
      v34[1] = 0;
      qfree();
    }
  }
  return v8;
}

