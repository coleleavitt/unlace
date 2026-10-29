__int64 __fastcall sub_20A20(__int64 a1, int a2, int a3, __int64 a4, int a5, int a6)
{
  __int64 v6; // rbx
  unsigned int v7; // edx
  char v9; // al
  __int64 v10; // rbx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // ecx
  int v14; // r8d
  int v15; // r9d
  __int64 v16; // rbx
  __int64 v17; // r13
  __int64 v18; // rbx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rsi
  unsigned __int64 v21; // r13
  __int64 v22; // r14
  int v23; // edx
  int v24; // ecx
  int v25; // r8d
  int v26; // r9d
  int v27; // edx
  int v28; // ecx
  unsigned int v29; // ebx
  int v30; // r8d
  int v31; // r9d
  int v32; // edx
  int v33; // ecx
  int v34; // r8d
  int v35; // r9d
  _BYTE *v37; // rdx
  _BYTE *v38; // r14
  _BYTE *v39; // r13
  _UNKNOWN **v40; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v41; // [rsp+8h] [rbp-A0h]
  int v42; // [rsp+10h] [rbp-98h]
  unsigned __int64 v43; // [rsp+20h] [rbp-88h] BYREF
  __int128 v44; // [rsp+28h] [rbp-80h]
  __int64 v45; // [rsp+40h] [rbp-68h]
  __int128 v46; // [rsp+48h] [rbp-60h]
  __int64 v47; // [rsp+60h] [rbp-48h] BYREF
  __int128 v48; // [rsp+68h] [rbp-40h]
  unsigned __int64 v49; // [rsp+78h] [rbp-30h]

  v6 = a3;
  v7 = *(_DWORD *)(a1 + 1816);
  v49 = __readfsqword(0x28u);
  v40 = &off_8B890;
  v9 = *(_BYTE *)(a1 + 2034);
  v41 = a1;
  v42 = a2;
  if ( v7 > 0xE )
  {
    if ( v9 )
    {
      if ( (_DWORD)v6 )
      {
        v44 = 0;
        v43 = 0;
        sub_15620((__int64 *)&v43);
        v46 = 0;
        v45 = 0;
        v45 = qvector_reserve();
        memset((void *)(v45 + 8 * v46), 0, 8 * (v6 - v46));
        *(_QWORD *)&v46 = v6;
        v10 = 8 * v6;
        if ( v10 != sub_29090(a1 + 1704, a4, v45, v10, v11, v12, v40, v41, v42) )
        {
          sub_65BB0(
            a1,
            (unsigned int)"WARNING: update_images: failed to read mach headers at 0x%a size: %zu\n",
            a4,
            v10,
            v14,
            v15);
          v29 = 0;
LABEL_15:
          if ( v45 )
          {
            *(_QWORD *)&v46 = 0;
            qfree();
          }
          if ( v43 )
          {
            *(_QWORD *)&v44 = 0;
            qfree();
          }
          return v29;
        }
        v16 = v45;
        v17 = v45 + 8 * v46;
        if ( v17 != v45 )
        {
          do
          {
            sub_20960((__int64 *)&v43);
            v16 += 8;
          }
          while ( v17 != v16 );
        }
        v18 = v44;
        if ( (unsigned __int64)v44 > 1 )
        {
          v20 = v43;
          v13 = v44 - 1;
          v37 = (_BYTE *)(v43 + v44 - 1);
          if ( v43 < (unsigned __int64)v37 )
          {
            while ( *(v37 - 1) == 44 )
            {
              if ( --v37 == (_BYTE *)v43 )
                goto LABEL_39;
            }
          }
          v38 = &v37[-v43];
          if ( v37 == (_BYTE *)v43 )
          {
LABEL_39:
            if ( v43 )
            {
              *(_QWORD *)&v44 = 0;
              qfree();
              v43 = 0;
              v18 = v44;
              *((_QWORD *)&v44 + 1) = 0;
              if ( !(_QWORD)v44 )
              {
                v21 = 3;
                v22 = 2;
                goto LABEL_42;
              }
              v18 = v44 - 1;
              v20 = 0;
              v19 = 0;
            }
            else
            {
              v19 = *((_QWORD *)&v44 + 1);
              v18 = v44 - 1;
            }
            goto LABEL_44;
          }
          v39 = v38 + 1;
          if ( (unsigned __int64)v44 < (unsigned __int64)(v38 + 1) )
          {
            if ( *((_QWORD *)&v44 + 1) < (unsigned __int64)v39 )
            {
              v43 = qvector_reserve();
              v18 = v44;
              v20 = v43;
            }
            memset((void *)(v20 + v18), 0, (size_t)&v39[-v18]);
            *(_QWORD *)&v44 = v38 + 1;
            v37 = &v38[v43];
          }
          else if ( (_BYTE *)v44 != v38 + 1 )
          {
            *(_QWORD *)&v44 = v38 + 1;
          }
          *v37 = 0;
          v18 = v44;
        }
        v19 = *((_QWORD *)&v44 + 1);
        v20 = v43;
        v21 = 3;
        v22 = 2;
        if ( !v18 )
          goto LABEL_9;
        --v18;
LABEL_44:
        v22 = v18 + 2;
        v21 = v18 + 3;
LABEL_9:
        if ( v19 >= v21 )
        {
LABEL_10:
          *(_QWORD *)&v44 = v21;
          *(_BYTE *)(v20 + v22) = 0;
          *(_WORD *)(v43 + v18) = 32093;
          v48 = 0;
          v47 = 0;
          if ( (unsigned __int8)sub_1E310(a1, &v47, (int)&v43, v13, v14, v15) )
          {
            v29 = sub_1B100(&v47, &v40, 0.0);
            if ( !(_BYTE)v29 )
            {
              sub_65BB0(
                a1,
                (unsigned int)"WARNING: update_images(): parsing of \"jGetLoadedDynamicLibrariesInfos:\" failed\n",
                v27,
                v28,
                v30,
                v31);
              v29 = 0;
            }
          }
          else
          {
            sub_65BB0(
              a1,
              (unsigned int)"WARNING: update_images(): \"jGetLoadedDynamicLibrariesInfos:\" request failed\n",
              v23,
              v24,
              v25,
              v26);
            v29 = 0;
          }
          if ( v47 )
          {
            *(_QWORD *)&v48 = 0;
            qfree();
          }
          goto LABEL_15;
        }
LABEL_42:
        v43 = qvector_reserve();
        v20 = v43;
        goto LABEL_10;
      }
      sub_65BB0(a1, (unsigned int)"WARNING: update_images: count == 0\n", v7, a4, a5, a6);
    }
    else
    {
      sub_65BB0(
        a1,
        (unsigned int)"WARNING: update_images: dyld version %d but no support for jGetLoadedDynamicLibrariesInfos, won't "
                      "process dyld_notify correctly\n",
        v7,
        a4,
        a5,
        a6);
    }
    return 0;
  }
  if ( v9 )
    v29 = sub_1F0E0(a1, v6, a4, (__int64)&v40);
  else
    v29 = sub_1E490(a1, v6, a4, (__int64)&v40);
  if ( !(_BYTE)v29 )
    sub_65BB0(a1, (unsigned int)"WARNING: update_images: parse_dyld_info() failed\n", v32, v33, v34, v35);
  return v29;
}

